AUTOMAKE_OPTIONS = subdir-objects

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = shr-glib-1.0.pc

SUBDIRS = \
	src

dist-hook: gen-ChangeLog

gen_start_date = 2009-03-12
.PHONY: gen-ChangeLog
gen-ChangeLog:
	if test -d .git; then								\
	  $(top_srcdir)/gitlog-to-changelog					\
	    --since=$(gen_start_date) > $(distdir)/cl-t;	\
	  rm -f $(distdir)/ChangeLog;						\
	  mv $(distdir)/cl-t $(distdir)/ChangeLog;			\
	fi

EXTRA_DIST = \
	gitlog-to-changelog

DISTCLEANFILES = \
	configure \
	config.guess \
	config.sub \
	Makefile.in \
	aclocal.m4 \
	compile \
	depcomp \
	install-sh \
	ltmain.sh \
	missing

