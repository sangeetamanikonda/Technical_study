CC=gcc
CFLAGS=-c -o

DEFAULT:
	$(CC) -o test.o mean.c main.c			
	./test.o
	
static_lib:
	$(CC) $(CFLAGS) mean.o mean.c
	ar rcs libmean.a mean.o
	$(CC) -static main.c -L. -lmean -o static_test.o 
	./static_test.o

shared_lib:
	$(CC) -fPIC mean.c $(CFLAGS) mean.o 
	gcc -shared -Wl,-soname,libmean.so.1 -o libmean.so.1.0.1  mean.o
	gcc main.c -o shared_test.o -L. -lmean
	./shared_test.o

dynamic_lib:
	$(CC) -fPIC mean.c $(CFLAGS) mean.o 
	gcc -shared -Wl,-soname,libmean.so.1 -o libmean.so.1.0.1  mean.o
	LD_LIBRARY_PATH= .
	gcc main.c -o shared_test.o -L. -lmean 
	./shared_test.o	

clean:
	rm -rf *.o *.a *.so.*
	
 
