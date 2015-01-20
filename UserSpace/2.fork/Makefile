CC = gcc
CFLAGS = -o
TARGET = fork
RM = rm -rf

all: $(TARGET) 

$(TARGET) : $(TARGET).c
	$(CC) $(CFLAGS) $(TARGET) $(TARGET).c
	./$(TARGET)

clean:
	$(RM) $(TARGET)
