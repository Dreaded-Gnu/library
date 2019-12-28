
AUTOMAKE_OPTIONS = nostdinc subdir-objects

AM_CFLAGS = -imacros ${top_builddir}/src/config.h -I${top_srcdir}/src/atag
AM_CCASFLAGS = -imacros ${top_builddir}/src/config.h -I${top_srcdir}/src/atag

lib_LIBRARIES = libatag.a
include_HEADERS = atag.h
libatag_a_SOURCES = \
  atag.h \
  next.c
