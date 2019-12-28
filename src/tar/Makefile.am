
AUTOMAKE_OPTIONS = nostdinc subdir-objects

AM_CFLAGS = -imacros ${top_builddir}/src/config.h -I${top_srcdir}/src/tar
AM_CCASFLAGS = -imacros ${top_builddir}/src/config.h -I${top_srcdir}/src/tar

lib_LIBRARIES = libtar.a
include_HEADERS = tar.h
libtar_a_SOURCES = \
  tar.h \
  end.c \
  file.c \
  helper.c \
  lookup.c \
  next.c \
  size.c
