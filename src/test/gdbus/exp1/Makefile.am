AM_CFLAGS = $(GLIB_CFLAGS) $(GIO_CFLAGS) -g
AM_CPPFLAGS = -I$(top_srcdir)/private-include

BUILT_SOURCES = Building.c Building.h
dist_noinst_DATA = Building.xml

bin_PROGRAMS = gdbus_server gdbus_client

gdbus_server_SOURCES = gdbus_server.c \
	Building.c Building.h
gdbus_server_LDADD = $(GLIB_LIBS) $(GIO_LIBS)

gdbus_client_SOURCES = gdbus_client.c \
	 Building.c Building.h
gdbus_client_LDADD = $(GLIB_LIBS) $(GIO_LIBS)

Building.c Building.h : Building.xml
	gdbus-codegen  --interface-prefix=com.qiaotsh.Building --generate-c-code=Building $<

MOSTLYCLEANFILES = $(BUILT_SOURCES)
