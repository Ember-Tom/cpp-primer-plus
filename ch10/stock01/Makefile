Stock01 : stock10.o usestck1.o
	g++ -o Stock01 stock10.o usestck1.o

stock10.o : stock10.cpp
	g++ -c stock10.cpp

usestck1.o : usestck1.cpp
	g++ -c usestck1.cpp

.PHONY : all
all : Stock01

clean :
		rm Stock01 stock10.o usestck1.o