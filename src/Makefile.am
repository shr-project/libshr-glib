AUTOMAKE_OPTIONS =

AM_CFLAGS = \
	$(DEPS_CFLAGS) \
	$(GDBUS_CODEGEN_CFLAGS) \
	-include $(CONFIG_HEADER)

GDBUSCODEGENFLAGS = \
	--strip-namespace=org


BUILT_SOURCES = libshr_glib_la.bindings.stamp

SHRHEADERS = \
	shr-phonefsousage.h \
	shr-phoneuicallmanagement.h \
	shr-phoneuicontacts.h \
	shr-phoneuidialer.h \
	shr-phoneuiidlescreen.h \
	shr-phoneuimessages.h \
	shr-phoneuinotification.h \
	shr-phoneuiphonelog.h \
	shr-phoneuisettings.h 

SHRSOURCES = \
	shr-phonefsousage.c \
	shr-phoneuicallmanagement.c \
	shr-phoneuicontacts.c \
	shr-phoneuidialer.c \
	shr-phoneuiidlescreen.c \
	shr-phoneuimessages.c \
	shr-phoneuinotification.c \
	shr-phoneuiphonelog.c \
	shr-phoneuisettings.c 

lib_LTLIBRARIES = libshr-glib.la

libshr_glib_la_SOURCES = \
	$(SHRHEADERS) \
	$(SHRSOURCES)

libshr_glibdir = $(includedir)/shr-glib
libshr_glib_HEADERS = \
	$(SHRHEADERS)


libshr_glib_la.bindings.stamp: gen-bindings $(libshr_glib_la_SOURCES)
	touch $@

gen-bindings:
	for f in $(SHR_SPECS_DIR)/*.xml; do gdbus-codegen --interface-prefix org.shr --generate-c-code `echo $$f | sed 's/.*\///g; s/^org\.shr\./shr-/g; s/.xml//g; s/\.//g;' | awk  '{ printf tolower($$1)}'` $$f; done

libshr_glib_la_LIBADD = \
	$(DEPS_LIBS)

EXTRA_DIST = \
	$(libshr_glib_la_SOURCES) \
	libshr_glib_la.bindings.stamp

CLEANFILES = \
	libshr_glib_la.bindings.stamp

DISTCLEANFILES = \
	Makefile.in
