TARGET = Stone
OBJS = stone.o stonewt.o
CC = g++

$(TARGET) : $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

.PHONY: clean
all : $(TARGET)

clean :
	rm -f *.o $(TARGET)
