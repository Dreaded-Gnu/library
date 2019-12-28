
AUTOMAKE_OPTIONS = nostdinc subdir-objects

AM_CFLAGS = -imacros ${top_builddir}/src/config.h -I${top_srcdir}/src/sys
AM_CCASFLAGS = -imacros ${top_builddir}/src/config.h -I${top_srcdir}/src/sys

lib_LIBRARIES = libsys.a
include_HEADERS = \
  message.h \
  type.h

libsys_a_SOURCES = \
  async/receive.c \
  async/send.c \
  sync/receive.c \
  sync/send.c \
  message.h \
  type.h
