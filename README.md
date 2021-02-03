<p align="center">
  <img width=50% src="https://raw.githubusercontent.com/makestd/.github/master/img/logo.svg" />
  <br />
  <a href="https://travis-ci.com/github/makestd/liblastword-dev">
    <img src="https://img.shields.io/travis/com/makestd/libmsl-lastword-dev?style=plastic" />
  </a>
  <br />
  <a href="README.md">
    <img src="https://img.shields.io/badge/lang-en-04246c.svg" />
  </a>
  <a href="README.es.md">
    <img src="https://img.shields.io/badge/lang-es-c20d1c.svg" />
  </a>
</p>

# Lastword - Development files

This project provides the development files of the `lastword` component
of the `msl` library.  It exposes a set of functions to obtain the
same result as with the [GNU Make][gnu-make] built-in function
[`lastword`][gnu-make-lastword].

## Dependencies

This project has the following dependencies:

- `stddef.h`: requires the type `size_t`. 

## Development dependencies

The development dependencies are the ones required to build and install
the project;  it uses several build systems so that you are free to
choose your favourite.

### Autotools

The development dependencies can be classified as required (to install
the project) or optional (to generate documentation or distribution
archives).  The required development dependencies are:

- `sh`: to execute the `bootstrap` script.
- `autoreconf`: to execute all the autotools programs at once.
- `automake`: to generate the template files (`.in`).
- `autoconf`: to generate the `configure` script.
- `make`: to execute the build targets (to compile, install, uninstall,
  clean, etc.).

The optional development dependencies are:

- `git`: to generate the `AUTHORS`, `ChangeLog` and `NEWS`.
- `texinfo`: to generate the manual's documentation.
- `pandoc`: to convert the Markdown files into plain text.
- `doxygen`: to generate the HTML documentation from the source.

## How to build/install

### Autotools

```sh
sh bootstrap # Initialise/refresh the Autotools build system
./configure  # Configure the parameters
make         # Compile/build the project
make install # Installs everything
```

## API

To view details about the exposed API, see the [API.md][api] document.


[readme-en]:         https://github.com/makestd/liblastword-dev/blob/master/README.md                      "The README file in English (the one you are viewing)"
[readme-es]:         https://github.com/makestd/liblastword-dev/blob/master/README.es.md                   "The README file in Spanish"
[gnu-make]:          https://www.gnu.org/software/make/                                                    "The GNU Make homepage"
[gnu-make-lastword]: https://www.gnu.org/software/make/manual/html_node/Text-Functions.html#index-lastword "Documentation of the built-in function: lastword"
[api]:               API.md                                                                                "Exposed API"

[img-readme-en]: https://img.shields.io/badge/lang-en-04246c.svg                                    "Badge of the English language"
[img-flag-en]:   https://upload.wikimedia.org/wikipedia/commons/a/ae/Flag_of_the_United_Kingdom.svg "Flag of the United Kingdom"
[img-readme-es]: https://img.shields.io/badge/lang-es-c20d1c.svg                                    "Badge of the Spanish language"
[img-flag-es]:   https://upload.wikimedia.org/wikipedia/commons/9/9a/Flag_of_Spain.svg              "Flag of the Spanish Kingdom"
