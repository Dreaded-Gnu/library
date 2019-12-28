
AUTOMAKE_OPTIONS = nostdinc subdir-objects

AM_CFLAGS = -imacros ${top_builddir}/src/config.h -I${top_srcdir}/src/list
AM_CCASFLAGS = -imacros ${top_builddir}/src/config.h -I${top_srcdir}/src/list

lib_LIBRARIES = liblist.a
include_HEADERS = list.h
liblist_a_SOURCES = \
  list.h \
  construct.c \
  destruct.c \
  empty.c \
  lookup.c \
  node_create.c \
  peek.c \
  pop.c \
  print.c \
  push.c
