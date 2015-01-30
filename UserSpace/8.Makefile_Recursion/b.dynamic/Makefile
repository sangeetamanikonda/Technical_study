CC=gcc
SRC=main.c
RM=rm -rf
OBJS= mean.o add.o
LIB=libcalc.so
CFLAGS= -c -fpic
DEPS= add.h mean.h
LIBPATH=$(shell pwd)/$(LIB)

all: dynamiclib
.PHONY: all
%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) $< -I. 

dynamiclib: $(OBJS)
	$(CC) -shared -o $(LIB) $(OBJS)
	$(CC) $(SRC) -o $@.o $(LIBPATH) 
	./$@.o

.PHONY: clean

clean:
	$(RM) *.o *.so
