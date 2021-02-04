# The TexInfo files to compile
info_TEXINFOS                = doc/libmsl-lastword-dev.texi
doc_libmsl_lastword_TEXINFOS = doc/introduction.texi \
                               doc/why.texi \
                               doc/api.texi \
                               doc/invocation.texi \
                               doc/mit.texi \
                               doc/indices.texi

# Include the CSS theme
AM_MAKEINFOHTMLFLAGS = --css-ref=texinfo-klare.css

# Downloads the CSS theme for the online documentation
html-local: doc/$(PACKAGE_NAME).html/texinfo-klare.css
doc/$(PACKAGE_NAME).html/texinfo-klare.css:
	URL='https://gitlab.com/luis-felipe/texinfo-css/-/raw/master/static/css/texinfo-klare.css'; \
	if test -x "$$(which curl)"; then \
		curl -sfLo '$@' "$$URL"; \
	else \
		wget -qO '$@' "$$URL"; \
	fi
