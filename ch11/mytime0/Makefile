TARGET = mytime
OBJS = mytime0.o usetime0.o
CC = g++

$(TARGET) : $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

.PHONY: clean
all : $(TARGET)

clean :
	rm -f *.o $(TARGET)
