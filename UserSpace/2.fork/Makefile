CC = gcc
CFLAGS = -o
TARGET = fork
RM = rm -rf

all: $(TARGET) 
.PHONY:all
$(TARGET) : $(TARGET).c 
	$(CC) $(CFLAGS) $(TARGET) $?

.PHONY:clean
clean:
	$(RM) $(TARGET)
