;;; tree-sitter-css-in-js.el --- tree-sitter support for CSS-in-JS -*- lexical-binding: t; -*-

;;; Version: 0.0.2

;;; Author: Dan Orzechowski

;;; URL: https://github.com/orzechowskid/tsx-mode.el

;;; Package-Requires: ((emacs "28.1") (tree-sitter "20220212.1632"))

;;; Code:

(defconst tree-sitter-css-in-js--archive
  "https://github.com/orzechowskid/tree-sitter-css-in-js/releases/download/latest/"
  "Location of tarball containing tree-sitter CSS-in-JS binaries.")

(defvar tree-sitter-css-in-js--lib-dir
  (file-name-directory (locate-library "tree-sitter-css-in-js.el"))
  "Location on disk of the directory containing this library.")

(defun tree-sitter-css-in-js--filename-for-platform ()
  "Returns the name of a shared library binary appropriate for the current OS
and hardware."
  (cond
   ;; TODO: works on my machine!
   (t "css_in_js.so")))

(let* ((filename (tree-sitter-css-in-js--filename-for-platform))
       (lib-dir tree-sitter-css-in-js--lib-dir)
       (tarball (concat filename ".tar.gz")))
  (unless (file-exists-p (file-name-concat
                          lib-dir
                          filename))
    (message "fetching CSS-in-JS parser binary...")

    (let ((inhibit-message t))
      (url-copy-file
       (concat tree-sitter-css-in-js--archive tarball)
       (file-name-concat lib-dir tarball)
       t)
      (call-process
       "tar"
       nil nil nil
       "-C" lib-dir "-zxf" (file-name-concat lib-dir tarball))
      (add-to-list 'tree-sitter-load-path lib-dir))))

(provide 'tree-sitter-css-in-js)
