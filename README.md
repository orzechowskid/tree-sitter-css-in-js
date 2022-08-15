# tree-sitter grammar for CSS-in-JS.

## Releases

binaries for all supported OS/hardware platforms (Linux, OSX, and Windows) are automatically built for you.  Freshest copies of the shared libraries can be found in the `latest` release.

## Elisp bindings

download `tree-sitter-css-in-js.el` and add it to your `load-path`.  `(require 'tree-sitter-css-in-js)` then should automatically download the shared library appropriate for your platform and configure tree-sitter to use it.

## License

src/scanner.c is licensed under the MIT License.  Original source can be found at https://github.com/tree-sitter/tree-sitter-css .
