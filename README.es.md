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

# Lastword - Ficheros de desarrollo

Este proyecto provee los ficheros de desarrollo del componente `lastword`
de la biblioteca `msl`.  Expone una serie de funciones para obtener
el mismo resultado que con la función incorporada
[`lastword`][gnu-make-lastword] de [GNU Make][gnu-make].

## Dependencias

Este proyecto tiene las siguientes dependencias:

- `stddef.h`: requiere el tipo `size_t`. 

## Dependencias de desarrollo

Las dependencias de desarrollo son las que se requieren para construir
e instalar este proyecto;  usa varios sistemas de construcción para
que puedas escoger tu favorito.

### Autotools

Las dependencias de desarrollo pueden clasificarse como necesarias
(para instalar el proyecto) u opcionales (para generar la documentación
o los archivos de distribución).  Las dependencias de desarrollo
necesarias son:

- `sh`: para ejecutar el script `bootstrap`.
- `autoreconf`: para ejecutar todos los programas de autotools de
  una sentada.
- `automake`: para generar los ficheros plantilla (`.in`).
- `autoconf`: para generar el script `configure`.
- `make`: para ejecutar las tareas de construcción (compilar, instalar,
  desinstalar, limpiar, etc.).

Las dependencias de desarrollo opcionales son:

- `git`: para generar los ficheros `AUTHORS`, `ChangeLog` y `NEWS`.
- `texinfo`: para generar el manual de documentación.
- `pandoc`: para convertir los ficheros Markdown a texto plano.
- `doxygen`: para generar la documentación HTML del código fuente.

## Como construir/instalar

### Autotools

```sh
sh bootstrap # Inicializa/actualiza Autotools
./configure  # Configura los parámetros
make         # Compila/construye el proyecto
make install # Instala todo
```

## API

Para ver los detalles de la API expuesta, lee el documento [API.md][api].


[readme-en]:         https://github.com/makestd/liblastword-dev/blob/master/README.md                      "El fichero README en Inglés"
[readme-es]:         https://github.com/makestd/liblastword-dev/blob/master/README.es.md                   "El fichero README en Español (el que estás visualizando)"
[gnu-make]:          https://www.gnu.org/software/make/                                                    "Página principal de GNU Make"
[gnu-make-lastword]: https://www.gnu.org/software/make/manual/html_node/Text-Functions.html#index-lastword "La documentación de la función incorporada: lastword"
[api]:               API.md                                                                                "API expuesta"

[img-readme-en]: https://img.shields.io/badge/lang-en-04246c.svg                                    "Etiqueta del idioma Inglés"
[img-flag-en]:   https://upload.wikimedia.org/wikipedia/commons/a/ae/Flag_of_the_United_Kingdom.svg "Bandera del Reino Unido"
[img-readme-es]: https://img.shields.io/badge/lang-es-c20d1c.svg                                    "Etiqueta del idioma Español"
[img-flag-es]:   https://upload.wikimedia.org/wikipedia/commons/9/9a/Flag_of_Spain.svg              "Bandera del Reino de España"
