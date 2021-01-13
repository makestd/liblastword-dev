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

# Installs the header files to a subdirectory
msldir       = $(includedir)/msl
msl_HEADERS  = src/msl/lastword.h
msl_HEADERS += src/msl/lastword_ret.h

# Generates the Doxygen documentation
@DX_RULES@
MOSTLYCLEANFILES = $(DX_CLEANFILES)

# Developers only - Removes all the Autotools generated files
clean-local:
	rm -r autom4te.cache
	rm -r build-aux
	rm aclocal.m4
	rm configure Makefile.in
	rm config.status config.log
	rm Doxyfile Makefile
