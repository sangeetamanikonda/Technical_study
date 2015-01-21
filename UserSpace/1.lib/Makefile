CC=gcc
CFLAGS=-c 
LDFLAGS=-static
EXTRAFLAGS= -fpic -c
SRC=main.c
PWD=$(shell pwd)
LIBSRC=mean.c
LIBOBJ=mean.o
RM= rm -rf

static_lib:
	$(CC) $(CFLAGS) $(LIBSRC)
	ar rcs libmean.a $(LIBOBJ)
	$(CC) $(LDFLAGS) $(SRC) -o static_test.o -L. -lmean 
	./static_test.o

shared_lib:
	$(CC) $(EXTRAFLAGS) $(LIBSRC)
	$(CC) -shared -o libcalc.so $(LIBOBJ)
	$(CC) $(SRC) -o shared_test.o $(PWD)/libcalc.so 
	./shared_test.o

clean:
	$(RM) *.o *.a *.so
	
 
