CC=gcc
CFLAGS=-c 
LDFLAGS=-static
EXTRAFLAGS= -fpic -c
SRC=main.c
PWD='pwd'
LIBSRC=mean.c
LIBOBJ=mean.o

static_lib:
	$(CC) $(CFLAGS) $(LIBSRC)
	ar rcs libmean.a $(LIBOBJ)
	$(CC) $(LDFLAGS) $(SRC) -o static_test.o -L. -lmean 
	./static_test.o

shared_lib:
	$(CC) $(EXTRAFLAGS) $(LIBSRC)
	$(CC) -shared -o libcalc.so $(LIBOBJ)
	export LD_LIBRARY_PATH=$(PWD)
	$(CC) $(SRC) -o shared_test.o -L. -lcalc 
	./shared_test.o

clean:
	rm -rf *.o *.a *.so
	
 
