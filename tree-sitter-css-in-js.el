;;; tree-sitter-css-in-js.el --- tree-sitter support for CSS-in-JS -*- lexical-binding: t; -*-

;;; Version: 0.0.2

;;; Author: Dan Orzechowski

;;; URL: https://github.com/orzechowskid/tsx-mode.el

;;; Package-Requires: ((emacs "28.1") (tree-sitter "20220212.1632"))

;;; Code:

(require 'tree-sitter)

(defconst tree-sitter-css-in-js--archive
  "https://github.com/orzechowskid/tree-sitter-css-in-js/releases/download/latest/"
  "Location of tarball containing tree-sitter CSS-in-JS binaries.")

(defvar tree-sitter-css-in-js--lib-dir
  (file-name-directory (locate-library "tree-sitter-css-in-js.el"))
  "Location on disk of the directory containing this library.")

(defun tree-sitter-css-in-js--filename-for-platform ()
  "Internal function.

Returns the name of a shared-library archive appropriate for the current OS
and hardware."
  (cond
   ((eq system-type "windows")
    "windows.tar.gz")
   ((eq system-type "darwin")
    "macos.tar.gz")
   (t "linux.tar.gz")))

(defun tree-sitter-css-in-js-fetch-archive (&optional force)
  "Downloads and uncompresses a platform-appropriate archive containing a tree-
sitter parser.  Setting FORCE to `t' will re-download the parser even if one is
already present on disk."

  (let* ((filename
          (tree-sitter-css-in-js--filename-for-platform))
         (lib-dir
          tree-sitter-css-in-js--lib-dir)
         (fs-path
          (file-name-concat lib-dir filename)))
    (when (or (not (file-exists-p fs-path))
              force)
      (message "fetching CSS-in-JS parser binary...")

      (url-copy-file
       (concat tree-sitter-css-in-js--archive filename) ; remote
       fs-path ; local
       t) ; overwrite
      (call-process
       "tar"
       nil nil nil
       "-C" lib-dir "-zxf" fs-path))))

(tree-sitter-css-in-js-fetch-archive)
(add-to-list 'tree-sitter-load-path tree-sitter-css-in-js--lib-dir)

(provide 'tree-sitter-css-in-js)
