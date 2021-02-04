dnl Verify and initialise Autoconf
AC_PREREQ([2.68])
AC_INIT([libmsl-lastword-dev],
        [1.0], [egasato.dev@gmail.com],
        [libmsl-lastword-dev],
        [https://github.com/makestd/liblastword-dev])

dnl Set the directory where the M4 macros are stored
AC_CONFIG_MACRO_DIR([m4])

dnl Set the directory where the auxiliary build files are stored
AC_CONFIG_AUX_DIR([build-aux])

dnl Make sure the type "size_t" exists
AC_TYPE_SIZE_T

dnl Make sure the required header files exist
AC_CHECK_HEADERS([stddef.h])

dnl Initialize Automake
AM_INIT_AUTOMAKE([1.11.3
                  dist-bzip2 dist-lzip dist-xz dist-zip
                  -Wall -Werror])

dnl Explicitly enable maintainer mode to allow disabling it at configuration
dnl time using the "--disable-maintainer-mode" flag.
AM_MAINTAINER_MODE([enable])

dnl Indicate which files are generated from configuration files
AC_CONFIG_FILES([Makefile])

dnl Defines the macro to generate the ChangeLog file
AX_GENERATE_CHANGELOG

dnl Defines the macro that expands to Pandoc's program
AX_PROG_PANDOC

dnl Generates and runs config.status and creates the Makefiles
AC_OUTPUT
