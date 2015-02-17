CC    = gcc
CFLAGS= -o
SRC   = signal.c
TARGET= signal
RM    = rm -rf

all: $(TARGET)
.PHONY:all

$(TARGET) : $(SRC)
	$(CC) $(CFLAGS) $@ $<

.PHONY:clean
clean:
	$(RM) $(TARGET)
	
