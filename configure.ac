AC_INIT([libshr-glib], [2011.03.08.2], [shr-devel@lists.shr-project.org], [libshr-glib])
AC_CONFIG_SRCDIR([src/Makefile.am])
AC_CONFIG_HEADERS(config.h)
AM_INIT_AUTOMAKE([dist-bzip2])
m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES([yes])])

AC_PROG_CC
AM_PROG_CC_C_O
AC_DISABLE_STATIC
AC_PROG_LIBTOOL


AC_SUBST(CFLAGS)
AC_SUBST(CPPFLAGS)
AC_SUBST(LDFLAGS)

GLIB_REQUIRED=2.30.0
FSO_SPECS_REQUIRED=$PACKAGE_VERSION

##############################################################################
# binding tools
PKG_CHECK_MODULES(SPECS,
	fso-specs >= $FSO_SPECS_REQUIRED
	shr-specs)
# specs directory
FSO_SPECS_DIR="`$PKG_CONFIG --variable=specsdir fso-specs`"
SHR_SPECS_DIR="`$PKG_CONFIG --variable=specsdir shr-specs`"
AC_SUBST(FSO_SPECS_DIR)
AC_SUBST(SHR_SPECS_DIR)

GLIB_REQUIRED=2.26.1
PKG_CHECK_MODULES(DEPS,
glib-2.0 >= $GLIB_REQUIRED
gobject-2.0 >= $GLIB_REQUIRED
gio-2.0 >= $GLIB_REQUIRED
gio-unix-2.0 >= $GLIB_REQUIRED
gthread-2.0 >= $GLIB_REQUIRED)

AC_SUBST(DEPS_CFLAGS)
AC_SUBST(DEPS_LIBS)

AC_CONFIG_FILES([
	Makefile
	src/Makefile
	shr-glib-1.0.pc
])
AC_OUTPUT
