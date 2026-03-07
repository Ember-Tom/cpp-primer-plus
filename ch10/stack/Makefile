TARGET = Stack
OBJS = stack.o stacker.o
CC = g++

$(TARGET) : $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

.PHONY: clean
all : $(TARGET)

clean :
	rm -f *.o $(TARGET)
