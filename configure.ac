# SPDX-License-Identifier: GPL-2.0

# This file is part of the lastword library development files.
#
# The lastword library is free software: you can redistribute it and/or
# modify it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# The lastword library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
#
# See the GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with the lastword library.
# If not, see <https://www.gnu.org/licenses/>.

# Initialize Autoconf
AC_INIT([liblastword-dev],
        [1.0.0],
        [egasato.dev@gmail.com],
        [liblastword-dev],
        [https://github.com/makestd/liblastword-dev])

# Force minimum Autoconf version
AC_PREREQ([2.68])

# Put Autotools auxiliary files in a subdir
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])

# Enable Automake to generate Makefiles, but do not enforce GNU standards and
# be as silent as possible
AM_INIT_AUTOMAKE([foreign])
AM_SILENT_RULES([yes])

# Generate a top-level Makefile
AC_CONFIG_FILES([Makefile])

# Add the checks deemed necessary by Autoscan
AC_PROG_CC
AC_TYPE_SIZE_T

# Doxygen support
DX_DOXYGEN_FEATURE(ON)
DX_DOT_FEATURE(OFF)
DX_HTML_FEATURE(ON)
DX_CHM_FEATURE(OFF)
DX_CHI_FEATURE(OFF)
DX_MAN_FEATURE(ON)
DX_RTF_FEATURE(OFF)
DX_XML_FEATURE(OFF)
DX_PDF_FEATURE(OFF)
DX_PS_FEATURE(OFF)
DX_INIT_DOXYGEN(liblastword-dev, Doxyfile, docs)

# Warn if Doxygen is not supported
if test -z "$DX_DOXYGEN"; then
    AC_MSG_WARN([Doxygen not found - continuing without Doxygen support])
fi

# Generate the Doxyfile if Doxygen is supported
AM_CONDITIONAL([HAVE_DX_DOXYGEN], [test -n "$DX_DOXYGEN"])
AM_COND_IF([HAVE_DX_DOXYGEN], [AC_CONFIG_FILES([Doxyfile])])

# Generate all the required output files
AC_OUTPUT
