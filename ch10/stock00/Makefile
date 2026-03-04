Stock00 : stock00.o usestck0.o
	g++ -o Stock00 stock00.o usestck0.o

stock00.o : stock00.cpp
	g++ -c stock00.cpp

usestck0.o : usestck0.cpp
	g++ -c usestck0.cpp

.PHONY : all
all : Stock00

clean :
		rm Stock00 stock00.o usestck0.o