AUTOMAKE_OPTIONS =

AM_CFLAGS = \
	$(DEPS_CFLAGS) \
	$(GDBUS_CODEGEN_CFLAGS) \
	-include $(CONFIG_HEADER)

GDBUSCODEGENFLAGS = \
	--strip-namespace=org


BUILT_SOURCES = libshr_glib_la.bindings.stamp

SHRHEADERS = \
	shr-bindings.h \
	shr-bindingsprivate.h \
	shr-marshallers.h \
	shr-phonefsousage.h \
	shr-phoneuicallmanagement.h \
	shr-phoneuicontacts.h \
	shr-phoneuidialer.h \
	shr-phoneuiidlescreen.h \
	shr-phoneuimessages.h \
	shr-phoneuinotification.h \
	shr-phoneuiphonelog.h \
	shr-phoneuisettings.h \
	shr-proxymanager.h \
	shr-types.h

SHRSOURCES = \
	shr-bindingsprivate.c \
	shr-marshallers.c \
	shr-phonefsousage.c \
	shr-phoneuicallmanagement.c \
	shr-phoneuicontacts.c \
	shr-phoneuidialer.c \
	shr-phoneuiidlescreen.c \
	shr-phoneuimessages.c \
	shr-phoneuinotification.c \
	shr-phoneuiphonelog.c \
	shr-phoneuisettings.c \
	shr-proxymanager.c

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
	gdbus-codegen --strip-prefix=org.shr $(SHR_SPECS_DIR)/*.xml

libshr_glib_la_LIBADD = \
	$(DEPS_LIBS)

EXTRA_DIST = \
	$(libshr_glib_la_SOURCES) \
	libshr_glib_la.bindings.stamp

CLEANFILES = \
	libshr_glib_la.bindings.stamp

DISTCLEANFILES = \
	Makefile.in
