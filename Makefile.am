# The subdirectories to run Automake
include include/Makefile.am
include doc/Makefile.am

# The Automake flags to use
ACLOCAL_AMFLAGS = -I m4 --install

# Generate the ChangeLog file from the Git commit messages
dist-hook: dist-ChangeLog
@GENERATE_CHANGELOG_RULES@
CHANGELOG_START = ce48eb98da50a9123e6c1a2ea0056c2cb7db6c4c^

# Generate a COPYING in $(top_distdir)
dist-hook: dist-COPYING
dist-COPYING: $(top_srcdir)/LICENSE
	cp -L $< $(top_distdir)/COPYING

# Generate a README in $(top_distdir)
dist-hook: dist-README
dist-README: $(top_srcdir)/README.md
	$(PANDOC) -f markdown $< -t plain -o $(top_distdir)/README

# Generate an API in $(top_distdir)
dist-hook: dist-API
dist-API: $(top_srcdir)/API.md
	$(PANDOC) -f markdown $< -t plain -o $(top_distdir)/API
