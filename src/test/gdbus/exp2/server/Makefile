#CURR_DIR=$(shell pwd)
#ROOTDIR=$(abspath $(CURR_DIR)/../)
#export PKG_CONFIG_PATH=$(ROOTDIR)/build/lib/pkgconfig

#source file
SOURCE  := $(wildcard *.c) $(wildcard *.cpp)
OBJS    := $(patsubst %.c,%.o,$(patsubst %.cpp,%.o,$(SOURCE)))

#target you can change target to what you want
TARGET  :=server

#compile and lib parameter
CC      := gcc
RM 	  :=-rm  -fr

#-L/home/path1   -L/home/path2   -L/home/path3 
#LIB_PATH:= -L$(ROOTDIR)/build/lib      `pkg-config --cflags --libs glib-2.0 gthread-2.0`   
LIB_PATH:= `pkg-config --cflags --libs glib-2.0 gthread-2.0  gio-2.0 gobject-2.0 gmodule-2.0`
LIBLINK :=-lpthread -lrt
LIBS    :=  $(LIBLINK)  $(LIB_PATH)

#-I/home/include1   -L/home/include2   -L/home/include3 
#INCPATH := -I$(ROOTDIR)/build/include/    -I$(ROOTDIR)/build/include/glib-2.0   -I$(ROOTDIR)/build/lib/glib-2.0/include
INCPATH :=-I/usr/include/glib-2.0/  -I/usr/include/glib-2.0/glib/ \
          -I/usr/lib/x86_64-linux-gnu/glib-2.0/include/  -I/usr/include/gio-unix-2.0/
DEFINES :=
CFLAGS  :=  -g  -Wall -O0   $(DEFINES)   $(INCPATH)  
CXXFLAGS:=  $(CFLAGS)    -DHAVE_CONFIG_H 


.PHONY :all  objs clean 

all : $(TARGET)

objs : $(OBJS)

clean :
	$(RM) *~  
	$(RM) *.o
	$(RM) *.so
	$(RM) $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CXXFLAGS) -o $@  $(OBJS)  $(LIBS)  
