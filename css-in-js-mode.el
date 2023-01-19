;;; css-in-js-mode.el --- CSS-in-JS minor mode -*- lexical-binding: t; -*-

;;; Commentary:

;;; Code:

(require 'css-mode)
(require 'treesit)
(require 'typescript-ts-mode)

(defgroup css-in-js-mode nil
  "CSS-in-JS minor mode."
  :group 'programming
  :prefix "css-in-js-mode-")


(defconst css-in-js--treesit-library--archives
  "https://github.com/orzechowskid/tree-sitter-css-in-js/releases/download/latest/"
  "Location of archives containing tree-sitter CSS-in-JS shared libraries.")


(defcustom css-in-js-mode-force-highlighting t
  "Enable/disable always-on CSS-in-JS syntax highlighting.
Default behavior is to always highlight all regions.  set to `nil' to only
highlight the region containing point (if any)."
  :type 'boolean
  :group 'css-in-js-mode
  :package-version '(css-in-js-mode "1.0"))

(defcustom css-in-js-mode-leading-indentation
  t
  "Enable/configure/disable the amount of leading indentation for CSS-in-JS.
The default behavior (value of `t') is to indent each CSS-in-JS region by the
value of `css-indent-offset'.  Setting this to a number value will indent each
CSS-in-JS region by that number of columns."
  :type '(choice (const :tag "None" 0)
                 (const :tag "Use css-indent-offset" t)
                 (integer :tag "Fixed number of columns"))
  :group 'css-in-js-mode
  :package-version '(css-in-js-mode "1.0"))

(defcustom css-in-js-mode-show-color-values
  t
  "Enable/disable the rendering of CSS color values using the color they specify.
The default behavior (value of `t') is to render any X11 or #RRGGBB color value
using the color specified by that value."
  :type 'boolean
  :group 'css-in-js-mode
  :package-version '(css-in-js-mode "1.0"))


(defvar css-in-js-mode--region-queries
  '(
    ;; styled-components, emotion, etc.
    ;; styled.foo``
    ((member_expression ((identifier) @id1) (:match "styled" @id1)) (template_string) @ts1)
    ;; styled(Foo)``
    ((call_expression (identifier) @id2) (:match "styled" @id2) (template_string) @ts2)
    ;; css``
    ((call_expression (identifier) @id3 (:match "css" @id3) (template_string) @ts3))
    ;; styled-jsx
    ;; <style jsx>{``}</style>
    ((jsx_element (jsx_opening_element (identifier) @name4 (:match "style" @name4) (jsx_attribute (property_identifier) @attr4 (:match "jsx" @attr4))) (jsx_expression (template_string) @ts4)))
    )
  "Typescript-grammar treesit queries targeting various CSS-in-JS regions.")

(defvar css-in-js-mode--font-lock-settings
  ;; TODO: open an enhancement against css-mode.el which exposes these rules via
  ;; a function which takes a language and returns a list, like what
  ;; typescript-ts-mode.el does, so that the same rules can be consumed here.
  ;; until then, we copypasta
  (treesit-font-lock-rules
   :language 'css-in-js
   :feature 'cssjs:comment
   :override t
   '((comment) @font-lock-comment-face)

   :language 'css-in-js
   :feature 'cssjs:string
   :override t
   '((string_value) @font-lock-string-face)

   :language 'css-in-js
   :feature 'cssjs:keyword
   :override t
   '(["@media"
      "@import"
      "@charset"
      "@namespace"
      "@keyframes" ]
     @font-lock-builtin-face
     ["and"
      "or"
      "not"
      "only"
      "selector"]
     @font-lock-keyword-face)

   :language 'css-in-js
   :feature 'cssjs:variable
   :override t
   '((plain_value) @font-lock-variable-name-face)

   :language 'css-in-js
   :feature 'cssjs:operator
   :override t
   '(["=" "~=" "^=" "|=" "*=" "$=" ] @font-lock-operator-face)

   :language 'css-in-js
   :feature 'cssjs:selector
   :override t
   '((class_selector) @css-selector
     (child_selector) @css-selector
     (id_selector) @css-selector
     (tag_name) @css-selector
     (class_name) @css-selector)

   :language 'css-in-js
   :feature 'cssjs:property
   :override t
   '((property_name) @css-property)

   :language 'css-in-js
   :feature 'cssjs:function
   :override t
   '((function_name) @font-lock-function-name-face)

   :language 'css-in-js
   :feature 'cssjs:constant
   :override t
   '((integer_value) @font-lock-number-face
     (float_value) @font-lock-number-face
     (unit) @font-lock-constant-face
     ;; e.g. `width: ${foo}px;`
     (declaration ((js_interpolation) (plain_value) @font-lock-constant-face (:match "px\\|em\\|rem\\|vw\\|vh" @font-lock-constant-face)))
     (important) @font-lock-builtin-face)

   :language 'css-in-js
   :feature 'cssjs:query
   :override t
   '((keyword_query) @font-lock-property-face
     (feature_name) @font-lock-property-face)

   :language 'css-in-js
   :feature 'cssjs:bracket
   :override t
   '((["(" ")" "[" "]" "{" "}"]) @font-lock-bracket-face)

   :language 'css-in-js
   :feature 'cssjs:property_values
   :override t
   '((plain_value) @css-in-js-mode--fontify-property-value
     (color_value) @css-in-js-mode--fontify-property-value))
  "treesit configuration for CSS-in-JS syntax highlighting.")

(defvar css-in-js-mode--font-lock-feature-list
  '((selector comment query keyword)
    (property constant string)
    (variable function operator bracket cssjs:property_values))
  "a list of lists of font-lock features describing what font-locking to apply at what font-lock level.")

(defvar css-in-js-mode--indent-rules
  `((css-in-js
     ;; special case for first line in stylesheet; see
     ;; `css-in-js-mode--simple-indent'
     ((and (parent-is "stylesheet")
	   (node-is "stylesheet"))
      prev-line ,(if (numberp css-in-js-mode-leading-indentation)
                    (or css-in-js-mode-leading-indentation 0)
                  css-indent-offset))
     ;; special case for direct children of the stylesheet
     ((parent-is "stylesheet")
      parent-bol 0)
     ;; special case - nodes in some multi-line expressions are occasionally nil
     ;; (something wrong with the grammar maybe?)
     (no-node
      parent-bol css-indent-offset)
     ;; closing
     ((or (node-is ")")
	  (node-is "}"))
      parent-bol 0)
     ;; children in a block
     ((parent-is "block")
      parent-bol css-indent-offset)
     ;; value of a declaration
     ((parent-is "declaration")
      parent-bol css-indent-offset)))
  "treesit configuration for CSS-in-JS indentation.")


(defvar-local css-in-js-mode--major-mode-lang
    nil
  "Internal variable.  The treesit language belonging to the parent major mode.")


(defun css-in-js-mode--fontify-property-value (node override start end)
  "Conditionally applies font-locking to rule values.  START and END are buffer
positions of the tree-sitter query which captured NODE; NODE is the captured
treesit node itself."
  (let ((buffer-start (treesit-node-start node))
	(buffer-end (treesit-node-end node))
	(text (treesit-node-text node)))
    (when (and css-in-js-mode-show-color-values
               (or (member text x-colors)
	           (string= (treesit-node-type node) "color_value")))
      (add-text-properties
       buffer-start buffer-end
       (list 'face (append
		    (list :background text)
		    (condition-case nil
			(list :foreground (readable-foreground-color text))
		      (error nil))))))))

(defun css-in-js-mode--treesit-set-ranges (start end)
  "Updates the range info for tree-sitter parsers in this buffer."
  (when css-in-js-mode
    (treesit-parser-set-included-ranges
     (treesit-parser-create 'css-in-js)
     (or
      (seq-map
       (lambda (el)
         (cons
          (+ (treesit-node-start (cdr el)) 1)
          (- (treesit-node-end (cdr el)) 1)))
       (seq-filter
        (lambda (el)
          (let* ((node (cdr el))
                 (start (treesit-node-start node))
                 (end (treesit-node-end node)))
            (and
	     (equal (treesit-node-type node)
	            "template_string")
             (> (- end start) 2)))) ; filter out empty template_string nodes
        (treesit-query-capture
         (treesit-buffer-root-node css-in-js-mode--major-mode-lang)
         css-in-js-mode--region-queries
         (point-min) (point-max))))
      ;; providing nil to `treesit-parser-set-included-ranges' tells it to span
      ;; the entire buffer, so instead we provide a dummy one
      (list (cons (point-max) (point-max)))))))

(defun css-in-js-mode--get-language-at-pos (pos)
  "Returns the treesit language at buffer position POS, either 'css-in-js or the
major mode's host language.
This function is suitable for use as `treesit-language-at-point-function'."
  (if (seq-find
       (lambda (el)
	 (and (>= pos (car el))
	      (<= pos (cdr el))))
       (treesit-parser-included-ranges (treesit-parser-create 'css-in-js)))
      'css-in-js
    css-in-js-mode--major-mode-lang))

(defun css-in-js-mode--current-region ()
  "Get the boundaries of the current CSS-in-JS region.
Returns a cons cell (start . end) of buffer locations."
  (seq-find
   (lambda (el)
     ;; ranges by definition are sorted and non-overlapping
     (< (point) (cdr el)))
   (treesit-parser-included-ranges (treesit-parser-create 'css-in-js))))

(defun css-in-js-mode--simple-indent (node parent bol)
  "Treesit indent function to handle some css-in-js edge cases.
Calls `treesit-simple-indent' with (possibly modified values of) NODE, PARENT,
and BOL."
  (if (eq (treesit-language-at (point)) 'css-in-js)
      (let ((treesit-simple-indent-rules css-in-js-mode--indent-rules))
        (css-in-js-mode--simple-indent-1 node parent bol))
    (let ((treesit-simple-indent-rules (typescript-ts-mode--indent-rules 'tsx)))
      (treesit-simple-indent node parent bol))))

(defun css-in-js-mode--simple-indent-1 (node parent bol)
  "Treesit indent function to handle some css-in-js edge cases.
Calls `treesit-simple-indent' with (possibly modified values of) NODE, PARENT,
and BOL."
  (cond
   ;; point is on the same line as JS/TS outside the css-in-js range
   ((null node)
    nil)
   ;; `treesit-simple-indent' won't indent if parent is nil
   ((and node
	 (string-match-p (treesit-node-type node) "stylesheet")
	 (null parent)
	 (save-excursion
	   (back-to-indentation)
	   (not (looking-at-p "`"))))
    (treesit-simple-indent node node bol))
   ;; everything else
   (t (treesit-simple-indent node parent bol))))

(defun css-in-js-mode--complete-property ()
  "`css--complete-property' modified for CSS-in-JS."
  ;; the original expects properties to be preceded with a '{' or ';' which will
  ;; not be the case for top-level CSS rules in CSS-in-JS regions (we need to
  ;; search for backticks too)
  (save-excursion
    (let ((pos (point)))
      (skip-chars-backward "-[:alnum:]")
      (let ((start (point)))
        (skip-chars-backward " \t\r\n")
        (when (memq (char-before) '(?\{ ?\; ?\`))
          (list start pos css-property-ids))))))

(defun css-in-js-mode--complete-property-value ()
  "`css--complete-property-value' modified for CSS-in-JS."
  ;; the original uses `syntax-ppss' to restrict the lookback area, which seems
  ;; to apply to tsx sexps instead of css-in-js ones
(save-excursion
  (save-match-data
    (let ((property
           (and (looking-back
                 "\\([[:alnum:]-]+\\):.*"
                 (car (css-in-js-mode--current-region))
                 t)
                (member (match-string-no-properties 1)
                        css-property-ids))))
      (when property
        (let ((end (point)))
          (save-excursion
            (skip-chars-backward "[:graph:]")
            (list (point) end
                  (append '("inherit" "initial" "unset")
                          (css--property-values (car property)))
                  :company-kind (lambda (_) 'value)))))))))

(defun css-in-js-mode--capf ()
  "`completion-at-point' function for css-in-js-mode."
  (when (eq (treesit-language-at (point)) 'css-in-js)
    (or (css-in-js-mode--complete-property)
        (css-in-js-mode--complete-property-value)
        (css-completion-at-point))))

(defvar-local css-in-js-mode--fontify-timer nil
  "Internal timer for font-locking CSS-in-JS regions as they're entered and
exited.")

(defun css-in-js-mode--fontify-post-command ()
  "Internal function to apply font-locking to the CSS-in-JS region containing
point (if any)."
  (when css-in-js-mode--fontify-timer
    (cancel-timer css-in-js-mode--fontify-timer))
  (setq css-in-js-mode--fontify-timer
        (run-with-idle-timer
         (+ 0.1 jit-lock-context-time) nil
         (lambda ()
           (css-in-js-mode--treesit-set-ranges (point-min) (point-max))
           (let* ((pos (point)))
             (seq-do
              (lambda (el)
                (let ((treesit-font-lock-settings
                       (if (and (>= pos (car el))
                                (<= pos (cdr el)))
                           (append
                            treesit-font-lock-settings
                            css-in-js-mode--font-lock-settings)
                         treesit-font-lock-settings)))
                  (treesit-font-lock-fontify-region
                   (car el) (cdr el))))
              (treesit-parser-included-ranges
               (treesit-parser-create 'css-in-js))))))))


;;;###autoload
(define-minor-mode css-in-js-mode
  "A minor mode adding CSS-in-JS support to your treesit-based major mode."
  :lighter " CSS+JS"
  :group 'css-in-js-mode
  :version "29.0"
  (pcase css-in-js-mode
    ;; enabling
    ('t
     ;; store a reference to the language configured by the major mode
     (setq-local
      css-in-js-mode--major-mode-lang
      (treesit-parser-language (car (treesit-parser-list))))
     (when (treesit-ready-p 'css-in-js)
       ;; configure range definitions
       (setq-local
        treesit-language-at-point-function
        #'css-in-js-mode--get-language-at-pos)
       (setq-local
        treesit-range-settings
        (append
         treesit-range-settings
         (treesit-range-rules
          'css-in-js-mode--treesit-set-ranges)))
       ;; configure font-lock
       (if css-in-js-mode-force-highlighting
           (setq-local
            treesit-font-lock-settings
            (append
             treesit-font-lock-settings
             css-in-js-mode--font-lock-settings))
         (progn
           ;; this does something weird with strings and ppss that I don't like
           (setq-local jit-lock-antiblink-grace 0)
           (add-hook
            'post-command-hook
            #'css-in-js-mode--fontify-post-command
            nil t)))
       (setq-local
        treesit-font-lock-feature-list
        (seq-mapn
         #'append
         treesit-font-lock-feature-list css-in-js-mode--font-lock-feature-list))
       ;; configure indentation
       (setq-local
        treesit-indent-function
        #'css-in-js-mode--simple-indent)
       ;; configure capf
       (add-hook
        'completion-at-point-functions
        #'css-in-js-mode--capf
        nil t)
       ;; configure treesit
       (treesit-major-mode-setup))
     t)
    ;; disabling
    ('nil
     ;; remove parser
     ;; TODO: graceful removal of range settings (right now our range-setting
     ;; function just checks that this mode is not disabled)
     (treesit-parser-delete (treesit-parser-create 'css-in-js))
     ;; unconfigure font-lock
     (setq-local
      treesit-font-lock-feature-list
      (seq-mapn
       #'seq-difference
       treesit-font-lock-feature-list css-in-js-mode--font-lock-feature-list))
     ;; unconfigure indentation
     (setq-local
      treesit-indent-function
      #'treesit-simple-indent)
     ;; unconfigure capf
     (remove-hook
      'completion-at-point-functions
      #'css-in-js-mode--capf
      t)
     ;; reconfigure treesit
     (treesit-major-mode-setup)
     nil)))


(defconst css-in-js-mode--treesit-archive-filename
  (cond
   ((eq system-type "windows")
    "windows.tar.gz")
   ((eq system-type "darwin")
    "macos.tar.gz")
   (t "linux.tar.gz"))
    "The name of a shared-library archive appropriate for the current OS and
hardware.")


(defun css-in-js-mode--treesit-shared-library-path ()
  "Returns the absolute path to a filesystem directory suitable for storing
tree-sitter shared libraries."
  (let ((path (expand-file-name (file-name-concat user-emacs-directory "tree-sitter"))))
    (make-directory path t)
    path))

;;;###autoload
(defun css-in-js-mode-fetch-shared-library (&optional force)
  "Fetches a remote archive containing a tree-sitter shared library suitable for
the current OS+CPU, uncompresses it, and stores it in a location accessible by
treesit.
Skips re-downloading if the archive is already present on disk, unless FORCE is
set to `t'."
  (let* ((archive-name css-in-js-mode--treesit-archive-filename)
         (lib-dir (css-in-js-mode--treesit-shared-library-path))
         (archive-fs-path (file-name-concat lib-dir archive-name)))
    (when (or (not (file-exists-p archive-fs-path))
              force)
      (message "fetching CSS-in-JS shared library...")
      (url-copy-file
       (concat css-in-js--treesit-library--archives archive-name)
       archive-fs-path
       t)
      (= 0 (call-process
            "tar"
            nil nil nil
            "-C" lib-dir "-zxf" archive-fs-path)))))


(provide 'css-in-js-mode)
