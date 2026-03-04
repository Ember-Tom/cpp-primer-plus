Stock02 : stock20.o usestok2.o
	g++ -o Stock02 stock20.o usestok2.o

stock20.o : stock20.cpp
	g++ -c stock20.cpp

usestok2.o : usestok2.cpp
	g++ -c usestok2.cpp

.PHONY : all
all : Stock02

clean :
		rm Stock02 stock20.o usestok2.o