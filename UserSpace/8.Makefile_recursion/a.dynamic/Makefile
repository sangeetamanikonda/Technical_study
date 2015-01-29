CC=gcc
EXTRAFLAGS=-I.
CFLAGS = -fpic -c
DEPS   = add.h mean.h
OBJS   = mean.o add.o
RM     = rm -rf
LIBSO  = libcalc.so
SRC    = main.c

all: shared_lib 
.PHONY: all

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) $< $(EXTRAFLAGS)

shared_lib: $(OBJS)
	$(CC) -shared -o $(LIBSO) $(OBJS)	
	$(CC) -o $@.o $(SRC) $(shell pwd)/$(LIBSO)
	./$@.o

.PHONY:  clean
clean:
	$(RM) *.o *.so
