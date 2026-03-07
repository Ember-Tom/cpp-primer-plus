TARGET = mytime1
OBJS = mytime1.o usetime1.o
CC = g++

$(TARGET) : $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

.PHONY: clean
all : $(TARGET)

clean :
	rm -f *.o $(TARGET)
