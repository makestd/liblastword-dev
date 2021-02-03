<p align="center">
  <a href="API.md">
    <img src="https://img.shields.io/badge/lang-en-04246c.svg" />
  </a>
  <a href="API.es.md">
    <img src="https://img.shields.io/badge/lang-es-c20d1c.svg" />
  </a>
</p>

# API

## Functions

<details>
  <summary>
    <b>msl_lastword_str</b>(<i>size_t</i>, <i>char *</i>, <i>size_t *</i>, <i>char **</i>)
    —
    <code>&lt;msl/lastword.h&gt;</code>
  </summary>

- Description: finds the last word of a string.
- Parameters:
  - Input:
    - _`size_t`_ **`len`**: the length of the string.
    - _`char *`_ **`str`**: the string.
  - Output:
    - _`size_t *`_ **`size`**: the size of the last word (if found).
    - _`char **`_ **`word`**: the last word (if found).
- Return values (_`int`_):
  - **`MSL_LASTWORD_ENULL`**: a null pointer was passed.
  - **`MSL_LASTWORD_EEMPTY`**: an empty pointer was passed.
  - **`MSL_LASTWORD_EBLANK`**: a blank array was passed.
- Guarantees:
  - If no error occurred, the return code will be `0`.
  - If an error occurred, the return code will be negative.

</details>

<details>
  <summary>
    <b>msl_lastword_arr</b>(<i>size_t</i>, <i>char **</i>, <i>size_t *</i>, <i>char **</i>)
    —
    <code>&lt;msl/lastword.h&gt;</code>
  </summary>

- Description: finds the last word of a an array of strings.
- Parameters:
  - Input:
    - _`size_t`_ **`arrc`**: the length of the array.
    - _`char **`_ **`arrv`**: the string values.
  - Output:
    - _`size_t *`_ **`size`**: the size of the last word (if found).
    - _`char **`_ **`word`**: the last word (if found).
- Return values (_`int`_):
  - **`MSL_LASTWORD_ENULL`**: a null pointer was passed.
  - **`MSL_LASTWORD_EEMPTY`**: an empty pointer was passed.
  - **`MSL_LASTWORD_EBLANK`**: a blank array was passed.
- Guarantees:
  - If no error occurred, the return code will be `0`.
  - If an error occurred, the return code will be negative.

</details>

## Macros

<details>
  <summary>
    <b>msl_lastword_str</b>(<i>char **</i>, <i>size_t *</i>, <i>char **</i>)
    —
    <code>&lt;msl/lastword.h&gt;</code>
  </summary>

- Description: finds the last word of a string.
- Parameters:
  - Input:
    - _`char *`_ **`str`**: the string.
  - Output:
    - _`size_t *`_ **`size`**: the size of the last word (if found).
    - _`char **`_ **`word`**: the last word (if found).
- Return values: same as <b>msl_lastword_str</b>(<i>size_t</i>, <i>char *</i>, <i>size_t *</i>, <i>char **</i>).
- Guarantees: same as <b>msl_lastword_str</b>(<i>size_t</i>, <i>char *</i>, <i>size_t *</i>, <i>char **</i>).

</details>

<details>
  <summary>
    <b>msl_lastword</b>(<i>size_t</i>, <i>char *[*]</i>, <i>size_t *</i>, <i>char **</i>)
    —
    <code>&lt;msl/lastword.h&gt;</code>
  </summary>

- Description: finds the last word using the C11 preprocessor macro `_Generic`.
- Parameters: same as <b>msl_lastword_str</b>(<i>size_t</i>, <i>char *</i>, <i>size_t *</i>, <i>char **</i>) or <b>msl_lastword_arr</b>(<i>size_t</i>, <i>char **</i>, <i>size_t *</i>, <i>char **</i>).
- Return values: same as <b>msl_lastword_str</b>(<i>size_t</i>, <i>char *</i>, <i>size_t *</i>, <i>char **</i>) or <b>msl_lastword_arr</b>(<i>size_t</i>, <i>char **</i>, <i>size_t *</i>, <i>char **</i>).
- Guarantees: same as <b>msl_lastword_str</b>(<i>size_t</i>, <i>char *</i>, <i>size_t *</i>, <i>char **</i>) or <b>msl_lastword_arr</b>(<i>size_t</i>, <i>char **</i>, <i>size_t *</i>, <i>char **</i>).

</details>

<details>
  <summary>
    <b>msl_lastword</b>(<i>char *[*]</i>, <i>size_t *</i>, <i>char **</i>)
    —
    <code>&lt;msl/lastword.h&gt;</code>
  </summary>

- Description: finds the last word of a string.
- Parameters:
  - Input:
    - _`char *[*]`_ **`text`**: the text to process.
  - Output:
    - _`size_t *`_ **`size`**: the size of the last word (if found).
    - _`char **`_ **`word`**: the last word (if found).
- Return values: same as <b>msl_lastword</b>(<i>size_t</i>, <i>char *[\*]</i>, <i>size_t *</i>, <i>char **</i>).
- Guarantees: same as <b>msl_lastword</b>(<i>size_t</i>, <i>char *[\*]</i>, <i>size_t *</i>, <i>char **</i>).

</details>

<details>
  <summary>
    <b>MSL_LASTWORD_ENULL</b>
    —
    <code>&lt;msl/lastword/error.h&gt;</code>
  </summary>

- Description: an error occurred because a null pointer was passed.
- Type: a literal negative number (`int`) exported using the C preprocessor macro `#define`.

</details>

<details>
  <summary>
    <b>MSL_LASTWORD_EEMPTY</b>
    —
    <code>&lt;msl/lastword/error.h&gt;</code>
  </summary>

- Description: an error occurred because an empty pointer was passed.
- Type: a literal negative number (`int`) exported using the C preprocessor macro `#define`.

</details>

<details>
  <summary>
    <b>MSL_LASTWORD_EBLANK</b>
    —
    <code>&lt;msl/lastword/error.h&gt;</code>
  </summary>

- Description: an error occurred because a blank array was passed.
- Type: a literal negative number (`int`) exported using the C preprocessor macro `#define`.

</details>
