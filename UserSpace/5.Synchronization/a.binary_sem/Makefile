CC = gcc
CFLAGS = -o
TARGET = binary_sem 
SRC = binary_sem.c 
LIBTHREAD = -lpthread 
RM = rm -rf

all: $(TARGET) 
.PHONY:all

$(TARGET) : $(SRC)
	$(CC) $(CFLAGS) $@ $< $(LIBTHREAD)

.PHONY:clean
clean:
	$(RM) $(TARGET)
