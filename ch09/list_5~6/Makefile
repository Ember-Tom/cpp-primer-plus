test : external.o support.o
	g++ -o test external.o support.o

external.o : external.cpp
	g++ -c external.cpp

support.o : support.cpp
	g++ -c support.cpp

.PHONY : all
all : test

clean :
		rm test external.o support.o