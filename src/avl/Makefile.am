
AUTOMAKE_OPTIONS = nostdinc subdir-objects

AM_CFLAGS = -imacros ${top_builddir}/src/config.h -I${top_srcdir}/src/avl
AM_CCASFLAGS = -imacros ${top_builddir}/src/config.h -I${top_srcdir}/src/avl

lib_LIBRARIES = libavl.a
include_HEADERS = avl.h
libavl_a_SOURCES = \
  avl.h \
  balance.c \
  create.c \
  destroy.c \
  find.c \
  insert.c \
  max.c \
  min.c \
  prepare.c \
  print.c \
  remove.c
