CC=gcc
EXTRAFLAGS=-I.
CFLAGS = -c
DEPS   = add.h mean.h
OBJS   = mean.o add.o
RM     = rm -rf
LIBA   = libcalc.a
LIBPATH= -L. -lcalc
SRC    = main.c

all: static_lib 
.PHONY: all

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) $< $(EXTRAFLAGS)

static_lib: $(OBJS)
	ar rcs $(LIBA) $(OBJS)	
	$(CC) -static -o $@.o $(SRC) $(LIBPATH)
	./$@.o

.PHONY:  clean
clean:
	$(RM) *.o *.a
