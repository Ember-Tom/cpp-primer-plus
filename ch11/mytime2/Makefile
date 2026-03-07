TARGET = mytime2
OBJS = mytime2.o usetime2.o
CC = g++

$(TARGET) : $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

.PHONY: clean
all : $(TARGET)

clean :
	rm -f *.o $(TARGET)