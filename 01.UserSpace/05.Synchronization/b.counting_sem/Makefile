CC = gcc
CFLAGS = -o
TARGET = counting_sem 
SRC = counting_sem.c 
LIBTHREAD = -lpthread 
RM = rm -rf

all: $(TARGET) 
.PHONY:all

$(TARGET) : $(SRC)
	$(CC) $(CFLAGS) $@ $< $(LIBTHREAD)

.PHONY:clean
clean:
	$(RM) $(TARGET)
