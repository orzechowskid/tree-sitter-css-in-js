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
    ((member_expression ((identifier) @_id1) (:match "styled" @_id1)) (template_string) @ts1)
    ;; styled(Foo)``
    ((call_expression (identifier) @_id2) (:match "styled" @_id2) (template_string) @ts2)
    ;; css``
    ((call_expression (identifier) @_id3 (:match "css" @_id3) (template_string) @ts3))

    ;; styled-jsx
    ;; <style jsx>{``}</style>
    ((jsx_element (jsx_opening_element (identifier) @_name4 (:match "style" @_name4) (jsx_attribute (property_identifier) @_attr4 (:match "jsx" @_attr4))) (jsx_expression (template_string) @ts4)))

    ;; Qwik - useStyles$(``) or useStylesScoped$(``)
    ((call_expression (identifier) @_id5 (:match "^useStyles\\(Scoped\\)?\\$" @_id5) (arguments (template_string) @ts5)))
    )
  "Typescript-grammar treesit queries targeting various CSS-in-JS regions.")

(defvar css-in-js-mode--font-lock-settings
  ;; TODO: open an enhancement against css-mode.el which exposes these rules via
  ;; a function which takes a language and returns a list, like what
  ;; typescript-ts-mode.el does, so that the same rules can be consumed here.
  ;; until then, we copypasta
  (treesit-font-lock-rules
   :feature 'comment
   :language 'css-in-js
   :override t
   '((comment) @font-lock-comment-face)

   :feature 'string
   :language 'css-in-js
   :override t
   '((string_value) @font-lock-string-face)

   :feature 'keyword
   :language 'css-in-js
   :override t
   '(["@media"
      "@import"
      "@charset"
      "@namespace"
      "@keyframes"] @font-lock-builtin-face
      ["and"
       "or"
       "not"
       "only"
       "selector"] @font-lock-keyword-face)

   :feature 'variable
   :language 'css-in-js
   :override t
   '((plain_value) @font-lock-variable-name-face)

   :feature 'operator
   :language 'css-in-js
   :override t
   `(["=" "~=" "^=" "|=" "*=" "$="] @font-lock-operator-face)

   :feature 'selector
   :language 'css-in-js
   :override t
   '((class_selector) @css-selector
     (child_selector) @css-selector
     (id_selector) @css-selector
     (attribute_selector) @css-selector
     (tag_name) @css-selector
     (class_name) @css-selector)

   :feature 'property
   :language 'css-in-js
   :override t
   '((property_name) @css-property)

   :feature 'function
   :language 'css-in-js
   :override t
   '((function_name) @font-lock-function-name-face)

   :feature 'constant
   :language 'css-in-js
   :override t
   '((integer_value) @font-lock-number-face
     (float_value) @font-lock-number-face
     (unit) @font-lock-constant-face
     ;; e.g. `width: ${foo}px;`
     (declaration ((js_interpolation) (plain_value) @font-lock-constant-face (:match "px\\|em\\|rem\\|vw\\|vh" @font-lock-constant-face)))
     (important) @font-lock-builtin-face)

   :feature 'query
   :language 'css-in-js
   :override t
   '((keyword_query) @font-lock-property-use-face
     (feature_name) @font-lock-property-use-face)

   :feature 'bracket
   :language 'css-in-js
   :override t
   '((["(" ")" "[" "]" "{" "}"]) @font-lock-bracket-face)

   :language 'css-in-js
   :feature 'property_values
   :override t
   '((plain_value) @css-in-js-mode--fontify-property-value
     (color_value) @css-in-js-mode--fontify-property-value))
  "Treesit configuration for CSS-in-JS syntax highlighting.")

(defvar css-in-js-mode--font-lock-feature-list
  '((selector comment query keyword)
    (property constant string)
    (variable function operator bracket property_values))
  "Font-lock features applicable at different treesit font-lock levels.")

(defvar css-in-js-mode--indent-rules
  `(css-in-js
    ;; a treesit parser root node spans the entire buffer, but CSS-in-JS
    ;; indentation may be different for individual regions due to indentation of
    ;; the JS template_string itself.  anything with a parent of "stylesheet" is
    ;; is at the top level of its CSS-in-JS region and is treated specially
    ((parent-is "stylesheet")
     css-in-js-mode--get-stylesheet-anchor
     ,(if (numberp css-in-js-mode-leading-indentation)
          css-in-js-mode-leading-indentation
        css-indent-offset))
    ;; regular treesit simple indent rules
    ((node-is "}") parent-bol 0)
    ((node-is ")") parent-bol 0)
    ((parent-is "block") parent-bol css-indent-offset)
    ((parent-is "declaration") parent-bol css-indent-offset)
    ((parent-is "feature_query") parent-bol css-indent-offset))
  "List of treesit configuration objects for CSS-in-JS indentation.")


(defvar-local css-in-js-mode--major-mode-lang
    nil
  "Internal variable.  The treesit language belonging to the parent major mode.")

(defvar-local css-in-js--previous-comment-dwim-remapping
    nil
  "Internal variable.  Store previous `comment-dwim' remapping before we remap it.")

(defvar-local css-in-js--treesit-parser
    nil
  "Internal variable. Store the `css-in-js' parser.")

(defun css-in-js-mode--get-stylesheet-anchor (node &rest _ignored)
  "Return an indentation anchor point based on the containing region of NODE."
  (let ((region-for-node (css-in-js-mode--get-region-for-node node)))
    (if region-for-node
        (+ 1
           (save-excursion
             (goto-char (car region-for-node))
             (back-to-indentation)
             (current-column)))
      0)))

(defun css-in-js-mode--fontify-property-value (node &rest _ignored)
  "Conditionally apply font-locking to rule values inside of NODE."
  (let ((buffer-start (treesit-node-start node))
	(buffer-end (treesit-node-end node))
	(text (treesit-node-text node)))
    (cond
     ((and css-in-js-mode-show-color-values
           (or (member text x-colors)
	           (string= (treesit-node-type node) "color_value")))
      (add-text-properties
       buffer-start buffer-end
       (list 'face (append
		            (list :background text)
		            (condition-case nil
			            (list :foreground (readable-foreground-color text))
		              (error nil))))))
     ((or (string= text "initial")
          (string= text "inherit")
          (string= text "auto")
          (string= text "unset"))
      (add-text-properties
       buffer-start buffer-end
       '(face font-lock-builtin-face))))))

(defun css-in-js-mode--treesit-set-ranges (&rest _ignored)
  "Update the range info for tree-sitter parsers in this buffer."
  (when css-in-js-mode
    (treesit-parser-set-included-ranges
     css-in-js--treesit-parser
     (or
      (seq-map
       (lambda (el)
         (cons
          ;; slice off the template-string delimiters
          (1+ (treesit-node-start (cdr el)))
          (save-excursion (goto-char (1- (treesit-node-end (cdr el))))
                          (skip-chars-backward " \t\n\r")
                          (point))))
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
      ;; the entire buffer, so instead we provide a dummy range of length zero
      (list (cons (point-max) (point-max)))))))

(defun css-in-js-mode--get-language-at-pos (pos)
  "Return the treesit language at buffer position POS.

The language will be either css-in-js or the major mode's host language.  This
function is suitable for use as `treesit-language-at-point-function'."
  (if (and css-in-js-mode (seq-find
       (lambda (el)
	 (and (>= pos (car el))
	      (<= pos (cdr el))))
       (treesit-parser-included-ranges css-in-js--treesit-parser)))
      'css-in-js
    css-in-js-mode--major-mode-lang))

(defun css-in-js-mode--get-region-for-node (node)
  "Return the css-in-js region containing node NODE, or nil."
  (when node
    (let ((node-start (treesit-node-start node)))
      (seq-find
       (lambda (el)
         ;; test that node-start is inside the current range.  (but don't test
         ;; that node-end is inside the range too!  that can result in false
         ;; negatives when there are syntax errors inside of CSS-in-JS nodes)
         (and (>= node-start (car el))
              (<= node-start (cdr el))))
       (treesit-parser-included-ranges css-in-js--treesit-parser)
       nil))))

(defun css-in-js-mode--current-region ()
  "Get the boundaries of the current CSS-in-JS region.
Returns a cons cell (start . end) of buffer locations."
  (seq-find
   (lambda (el)
     ;; ranges by definition are sorted and non-overlapping
     (< (point) (cdr el)))
   (treesit-parser-included-ranges css-in-js--treesit-parser)))

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
  "`completion-at-point' function for `css-in-js-mode'."
  (when (eq (treesit-language-at (point)) 'css-in-js)
    (or (css-in-js-mode--complete-property)
        (css-in-js-mode--complete-property-value)
        (css-completion-at-point))))

(defun css-in-js-comment-dwim (arg)
  "Add support for commenting/uncommenting inside css in js.
See `comment-dwim' documentation for ARG usage."
  (interactive "P")
  (if (eq (css-in-js-mode--get-language-at-pos (point)) 'css-in-js)
      (let ((comment-start "/* ")
            (comment-end " */"))
        (comment-dwim arg))
    (if css-in-js--previous-comment-dwim-remapping
        (funcall css-in-js--previous-comment-dwim-remapping arg)
      (comment-dwim arg))))

(define-minor-mode css-in-js-mode
  "a minor mode for some flavors of CSS-in-JS."
  :lighter " CSS+JS"
  :group 'css-in-js-mode
  :version "29.0"
  (when (treesit-ready-p 'css-in-js)
    (pcase css-in-js-mode
      ('t
       ;; store a reference to the language configured by the major mode
       ;; FIXME: this is fragile - it seems like an implementation detail that new
       ;; treesit parsers are added to the head of the list returned by
       ;; `treesit-parser-list'
       (setq-local
        css-in-js-mode--major-mode-lang
        (treesit-parser-language (car (treesit-parser-list))))
       ;; mode is being enabled
       (message "enabling...")
       ;; create parser
       (setq-local css-in-js--treesit-parser (treesit-parser-create 'css-in-js))
       ;; configure range definitions
       (setq-local
        treesit-range-settings
        (append
         treesit-range-settings
         (treesit-range-rules
          #'css-in-js-mode--treesit-set-ranges)))
       ;; configure language-at-point sniffer
       (setq-local
        treesit-language-at-point-function
        #'css-in-js-mode--get-language-at-pos)
       ;; configure font-locking
       (setq-local
        treesit-font-lock-settings
        (append
         treesit-font-lock-settings
         css-in-js-mode--font-lock-settings))
       (setq-local
        treesit-font-lock-feature-list
        (seq-mapn
         #'append
         treesit-font-lock-feature-list css-in-js-mode--font-lock-feature-list))
       ;; configure indentation
       (add-to-list 'treesit-simple-indent-rules css-in-js-mode--indent-rules t)
       ;; apply treesit-related changes
       (treesit-major-mode-setup)
       ;; configure capf
       (add-hook
        'completion-at-point-functions
        #'css-in-js-mode--capf
        nil t)
       ;; comments support
       (setq-local css-in-js--previous-comment-dwim-remapping (command-remapping 'comment-dwim))
       (define-key (current-local-map) [remap comment-dwim] 'css-in-js-comment-dwim)
       ;; (add-hook
       ;;  'post-command-hook
       ;;  #'css-in-js-mode--fontify-post-command
       ;;  nil t)
       )
      ('nil
       ;; mode is being disabled
       (message "disabling...")
       ;; remove comments support
       (define-key (current-local-map) [remap comment-dwim]
                   css-in-js--previous-comment-dwim-remapping)
       ;; remove parser
       ;; TODO: graceful removal of range settings (right now our range-setting
       ;; function just checks that this mode is not disabled)
       (treesit-parser-delete css-in-js--treesit-parser)
       ))))

    ;; (setq-local
    ;;  css-in-js-mode--major-mode-lang
    ;;  (treesit-parser-language (car (treesit-parser-list))))
    ;; (treesit-parser-create 'css-in-js)
    ;; (css-in-js-mode--treesit-set-ranges (point-min) (point-max))
    ;; (message "ranges: %s" (treesit-parser-included-ranges (treesit-parser-create 'css-in-js)))))

;; ;;;###xxxautoload
;; (define-minor-mode css-in-js-mode
;;   "A minor mode adding CSS-in-JS support to your treesit-based major mode."
;;   :lighter " CSS+JS"
;;   :group 'css-in-js-mode
;;   :version "29.0"
;;   (pcase css-in-js-mode
;;     ;; enabling
;;     ('t
;;      ;; store a reference to the language configured by the major mode
;;      (setq-local
;;       css-in-js-mode--major-mode-lang
;;       (treesit-parser-language (car (treesit-parser-list))))
;;      (when (treesit-ready-p 'css-in-js)
;;        ;; configure range definitions
;;        (setq-local
;;         treesit-language-at-point-function
;;         #'css-in-js-mode--get-language-at-pos)
;;        (setq-local
;;         treesit-range-settings
;;         (append
;;          treesit-range-settings
;;          (treesit-range-rules
;;           'css-in-js-mode--treesit-set-ranges)))
;;        ;; configure font-lock
;;        (if css-in-js-mode-force-highlighting
;;            (setq-local
;;             treesit-font-lock-settings
;;             (append
;;              treesit-font-lock-settings
;;              css-in-js-mode--font-lock-settings))
;;          (progn
;;            ;; this does something weird with strings and ppss that I don't like
;;            (setq-local jit-lock-antiblink-grace 0)
;;            (add-hook
;;             'post-command-hook
;;             #'css-in-js-mode--fontify-post-command
;;             nil t)))
;;        (setq-local
;;         treesit-font-lock-feature-list
;;         (seq-mapn
;;          #'append
;;          treesit-font-lock-feature-list css-in-js-mode--font-lock-feature-list))
;;        ;; configure indentation
;;        (setq-local
;;         treesit-indent-function
;;         #'css-in-js-mode--simple-indent)
;;        ;; configure capf
;;        (add-hook
;;         'completion-at-point-functions
;;         #'css-in-js-mode--capf
;;         nil t)
;;        ;; configure treesit
;;        (treesit-major-mode-setup))
;;      t)
;;     ;; disabling
;;     ('nil
;;      ;; remove parser
;;      ;; TODO: graceful removal of range settings (right now our range-setting
;;      ;; function just checks that this mode is not disabled)
;;      (treesit-parser-delete (treesit-parser-create 'css-in-js))
;;      ;; unconfigure font-lock
;;      (setq-local
;;       treesit-font-lock-feature-list
;;       (seq-mapn
;;        #'seq-difference
;;        treesit-font-lock-feature-list css-in-js-mode--font-lock-feature-list))
;;      ;; unconfigure indentation
;;      (setq-local
;;       treesit-indent-function
;;       #'treesit-simple-indent)
;;      ;; unconfigure capf
;;      (remove-hook
;;       'completion-at-point-functions
;;       #'css-in-js-mode--capf
;;       t)
;;      ;; reconfigure treesit
;;      (treesit-major-mode-setup)
;;      nil)))


(defconst css-in-js-mode--treesit-archive-filename
  (cond
   ((eq system-type 'windows)
    "windows.tar.gz")
   ((eq system-type 'darwin)
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
