CC=gcc
CFLAGS=-c 
EXTRAFLAGS= -fpic -c
SRC=main.c
PWD=$(shell pwd)
LIBSRC=mean.c
LIBOBJ=mean.o
RM= rm -rf

all: static_lib shared_lib

.PHONY: all

static_lib: 
	$(CC) $(CFLAGS) $(LIBSRC)
	ar rcs libmean.a $(LIBOBJ)
	$(CC) -static $(SRC) -o $@.o -L. -lmean 

shared_lib:$(LIBOBJ)
	$(CC) $(EXTRAFLAGS) $(LIBSRC)
	$(CC) -shared -o libcalc.so $(LIBOBJ)
	$(CC) $(SRC) -o $@.o $(PWD)/libcalc.so 

.PHONY: all

clean:
	$(RM) *.o *.a *.so
	
 
