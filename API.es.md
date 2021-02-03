<p align="center">
  <a href="API.md">
    <img src="https://img.shields.io/badge/lang-en-04246c.svg" />
  </a>
  <a href="API.es.md">
    <img src="https://img.shields.io/badge/lang-es-c20d1c.svg" />
  </a>
</p>

# API

## Funciones

<details>
  <summary>
    <b>msl_lastword_str</b>(<i>size_t</i>, <i>char *</i>, <i>size_t *</i>, <i>char **</i>)
    —
    <code>&lt;msl/lastword.h&gt;</code>
  </summary>

- Descripción: encuentra la última palabra de una cadena de texto.
- Parámetros:
  - Entrada:
    - _`size_t`_ **`len`**: la longitud de la cadena de texto.
    - _`char *`_ **`str`**: la cadena de texto.
  - Salida:
    - _`size_t *`_ **`size`**: el tamaño de la última palabra (si se encuentra).
    - _`char **`_ **`word`**: la última palabra (si se encuentra).
- Valores de retorno (_`int`_):
  - **`MSL_LASTWORD_ENULL`**: un puntero nulo fue pasado.
  - **`MSL_LASTWORD_EEMPTY`**: un puntero vacío fue pasado.
  - **`MSL_LASTWORD_EBLANK`**: un puntero en blanco fue pasado.
- Garantías:
  - Si no ocurrió ningún error, el valor de retorno será `0`.
  - Si ocurrió algún error, el valor de retorno será negativo.

</details>

<details>
  <summary>
    <b>msl_lastword_arr</b>(<i>size_t</i>, <i>char **</i>, <i>size_t *</i>, <i>char **</i>)
    —
    <code>&lt;msl/lastword.h&gt;</code>
  </summary>

- Descripción: encuentra la última palabra de un array de cadenas de texto.
- Parámetros:
  - Entrada:
    - _`size_t`_ **`arrc`**: la longitud del array.
    - _`char **`_ **`arrv`**: la cadena de texto values.
  - Salida:
    - _`size_t *`_ **`size`**: el tamaño de la última palabra (si se encuentra).
    - _`char **`_ **`word`**: la última palabra (si se encuentra).
- Valores de retorno (_`int`_):
  - **`MSL_LASTWORD_ENULL`**: un puntero nulo fue pasado.
  - **`MSL_LASTWORD_EEMPTY`**: un puntero vacío fue pasado.
  - **`MSL_LASTWORD_EBLANK`**: un puntero en blanco fue pasado.
- Garantías:
  - Si no ocurrió ningún error, el valor de retorno será `0`.
  - Si ocurrió algún error, el valor de retorno será negativo.

</details>

## Macros

<details>
  <summary>
    <b>msl_lastword_str</b>(<i>char **</i>, <i>size_t *</i>, <i>char **</i>)
    —
    <code>&lt;msl/lastword.h&gt;</code>
  </summary>

- Descripción: encuentra la última palabra de una cadena de texto.
- Parámetros:
  - Entrada:
    - _`char *`_ **`str`**: la cadena de texto.
  - Salida:
    - _`size_t *`_ **`size`**: el tamaño de la última palabra (si se encuentra).
    - _`char **`_ **`word`**: la última palabra (si se encuentra).
- Valores de retorno: los mismos que <b>msl_lastword_str</b>(<i>size_t</i>, <i>char *</i>, <i>size_t *</i>, <i>char **</i>).
- Garantías: las mismas que <b>msl_lastword_str</b>(<i>size_t</i>, <i>char *</i>, <i>size_t *</i>, <i>char **</i>).

</details>

<details>
  <summary>
    <b>msl_lastword</b>(<i>size_t</i>, <i>char *[*]</i>, <i>size_t *</i>, <i>char **</i>)
    —
    <code>&lt;msl/lastword.h&gt;</code>
  </summary>

- Descripción: encuentra la última palabra using the C11 preprocessor macro `_Generic`.
- Parámetros: los mismos que <b>msl_lastword_str</b>(<i>size_t</i>, <i>char *</i>, <i>size_t *</i>, <i>char **</i>) o <b>msl_lastword_arr</b>(<i>size_t</i>, <i>char **</i>, <i>size_t *</i>, <i>char **</i>).
- Valores de retorno: los mismos que <b>msl_lastword_str</b>(<i>size_t</i>, <i>char *</i>, <i>size_t *</i>, <i>char **</i>) o <b>msl_lastword_arr</b>(<i>size_t</i>, <i>char **</i>, <i>size_t *</i>, <i>char **</i>).
- Garantías: las mismas que <b>msl_lastword_str</b>(<i>size_t</i>, <i>char *</i>, <i>size_t *</i>, <i>char **</i>) o <b>msl_lastword_arr</b>(<i>size_t</i>, <i>char **</i>, <i>size_t *</i>, <i>char **</i>).

</details>

<details>
  <summary>
    <b>msl_lastword</b>(<i>char *[*]</i>, <i>size_t *</i>, <i>char **</i>)
    —
    <code>&lt;msl/lastword.h&gt;</code>
  </summary>

- Descripción: encuentra la última palabra de una cadena de texto.
- Parámetros:
  - Entrada:
    - _`char *[*]`_ **`text`**: the text to process.
  - Salida:
    - _`size_t *`_ **`size`**: el tamaño de la última palabra (si se encuentra).
    - _`char **`_ **`word`**: la última palabra (si se encuentra).
- Valores de retorno: los mismos que <b>msl_lastword</b>(<i>size_t</i>, <i>char *[\*]</i>, <i>size_t *</i>, <i>char **</i>).
- Garantías: las mismas que <b>msl_lastword</b>(<i>size_t</i>, <i>char *[\*]</i>, <i>size_t *</i>, <i>char **</i>).

</details>

<details>
  <summary>
    <b>MSL_LASTWORD_ENULL</b>
    —
    <code>&lt;msl/lastword/error.h&gt;</code>
  </summary>

- Descripción: un error ocurrió porque un puntero nulo fue pasado.
- Type: un número negativo literal (`int`) exportado usando la macro de preprocesado de C `#define`.

</details>

<details>
  <summary>
    <b>MSL_LASTWORD_EEMPTY</b>
    —
    <code>&lt;msl/lastword/error.h&gt;</code>
  </summary>

- Descripción: un error ocurrió porque un puntero vacío fue pasado.
- Type: un número negativo literal (`int`) exportado usando la macro de preprocesado de C `#define`.

</details>

<details>
  <summary>
    <b>MSL_LASTWORD_EBLANK</b>
    —
    <code>&lt;msl/lastword/error.h&gt;</code>
  </summary>

- Descripción: un error ocurrió porque un puntero en blanco fue pasado.
- Type: un número negativo literal (`int`) exportado usando la macro de preprocesado de C `#define`.

</details>
