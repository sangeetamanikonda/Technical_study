CC=gcc
SRC=main.c
RM=rm -rf
OBJS= mean.o add.o
LIB=libcalc.a
CFLAGS= -c -Wall
DEPS= add.h mean.h

all: staticlib
.PHONY: all
%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) $< -I. 

staticlib: $(OBJS)
	ar rcs $(LIB) $(OBJS)
	$(CC) -static $(SRC) -o $@.o $(LIB)


.PHONY: clean

clean:
	$(RM) *.o *.a
