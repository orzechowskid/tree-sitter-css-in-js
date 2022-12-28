# tree-sitter-css-in-js

## tree-sitter grammar

a [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar based on [the existing CSS tree-sitter grammar](https://github.com/tree-sitter/tree-sitter-css) which adds support for Javascript/Typescript template-string interpolation tokens.  the intended usage is in IDEs where source code files are parsed using multiple tree-sitter languages at the same time:

```
const height = '16px';          /* javascript */
const MyComponent = styled.div`
  display: inline-block;        /* CSS */
  height: ${height};            /* both! */
  background-color: tomato;
`;
```

this should provide the basic functionality required for IDEs to support features like indentation, syntax highlighting, and code-completion hinting for CSS-in-JS using tree-sitter:

![](https://repository-images.githubusercontent.com/515372828/a6f10257-e841-4553-9ccf-b7e6cd525b18)

### Releases

shared libraries for all supported OS+CPU platforms are automatically built for you.  Freshest copies of these shared libraries can be found in the Github release tagged `latest`.

| OS      | Arch    | Status           |
|---------|---------|------------------|
| Linux   | x86\_64 | builds; tested   |
| OSX     | x86\_64 | builds; untested |
| OSX     | arm64   | builds; tested   |
| Windows | x86\_64 | builds; untested |

### Local build instructions

1. clone this repo
2. run `npm install` to install dependencies
3. run `npm run build` to build a tree-sitter shared library appropriate for your platform.  the shared library will be written to a platform-specific directory; check [tree-sitter's documentation](https://tree-sitter.github.io/tree-sitter/syntax-highlighting#per-user-configuration) to see where your .so / .dll is.

emacs users should note that this repository is not currently compatible with the language-builder repo at https://github.com/casouri/tree-sitter-module/ .  (the package.json in this repo has an npm postinstall step which clones the base CSS grammar repo)

## emacs minor mode

`css-in-js-mode` is an emacs minor mode designed to bring support for (several flavors of) CSS-in-JS to the treesit-aware Javascript/Typescript/JSX/TSX major modes in emacs version 29.0 and newer.  syntax highlighting, indentation, and completion-at-point are all supported.

### Requirements

- a version of emacs compiled with treesit support

### Installation

1. download `css-in-js-mode.el` and put it in a directory listed in your `load-path`
1. load the file: `(require 'css-in-js)`

> these steps can also be done using [straight.el](https://github.com/radian-software/straight.el):
> `(straight-use-package '(css-in-js-mode :type git :host github :repo "orzechowskid/tree-sitter-css-in-js"))`
>
> or using straight.el plus use-package:
> `(use-package css-in-js-mode
>   :straight '(css-in-js-mode :type git :host github :repo "orzechowskid/tree-sitter-css-in-js"))`

### Usage

1. fetch the tree-sitter shared library appropriate for your OS+CPU if you don't already have it on disk: `(css-in-js-mode-fetch-shared-library)` (and pass it an argument of `t` to force a re-download of the latest released version if you do already have it on disk)
1. visit a javascript/typescript file and enable the Typescript[TSX] major mode: `(tsx-ts-mode)`
1. enable this minor-mode: `(css-in-js-mode)`

### Configuration

useful variables are members of the `css-in-js-mode` customization group and can be viewed and modified with the command `M-x customize-group [RET] css-in-js-mode [RET]`.

this minor mode also uses `css-indent-offset` to control the amount of whitespace applied to each indent step so be sure to set that to an acceptable value too.

## Bugs

### Grammar bugs

please first check to see that your bug is not present when parsing a file using the base CSS grammar (from which the CSS-in-JS grammar derives).  if it is present there too then you'll want to file an issue over at https://github.com/tree-sitter/tree-sitter-css .

### emacs minor-mode bugs

please first check to see that your bug is not present in the base `tsx-ts-mode` or `css-ts-mode` (whichever one is applicable).  if it is present there too then you'll want to file an issue against emacs by using `M-x report-emacs-bug` (after reading through the manual at `M-x info-emacs-bug` first).

## License

src/scanner.c is &copy; 2018 Max Brunsfeld, licensed under the MIT License.  Original source can be found at https://github.com/tree-sitter/tree-sitter-css .
all other code is licensed under the MIT License.  See LICENSE in the top level of this repository.
