# tree-sitter grammar for CSS-in-JS

I don't 100% know what this is good for really.  but it's been helpful in getting CSS-in-JS to work more accurately in [`tsx-mode`](https://github.com/orzechowskid/tsx-mode.el), a TS/TSX major mode for emacs.  Maybe it will be helpful to you too somehow?

## Releases

binaries for all supported OS/hardware platforms (Linux, OSX, and Windows) are automatically built for you.  Freshest copies of the shared libraries can be found in the `latest` release.

## Elisp bindings

download `tree-sitter-css-in-js.el` and add it to your `load-path`.  `(require 'tree-sitter-css-in-js)` then should automatically download the shared library appropriate for your platform and configure tree-sitter to use it.

> or use [straight.el](https://github.com/radian-software/straight.el):
> `(straight-use-package '(tree-sitter-css-in-js :type git :host github :repo "orzechowskid/tree-sitter-css-in-js"))`

> or with `use-package`:
> `(use-package tree-sitter-css-in-js
>   :straight '(tree-sitter-css-in-js :type git :host github :repo "orzechowskid/tree-sitter-css-in-js"))`

## License

src/scanner.c is &copy; 2018 Max Brunsfeld, licensed under the MIT License.  Original source can be found at https://github.com/tree-sitter/tree-sitter-css .
all other code is licensed under the MIT License.  See LICENSE in the top level of this repository.
