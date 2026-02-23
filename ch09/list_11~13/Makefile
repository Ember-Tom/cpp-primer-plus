usenmsp : usenmsp.o namesp.o
	g++ -o usenmsp usenmsp.o namesp.o

usenmsp.o : usenmsp.cpp
	g++ -c usenmsp.cpp

namesp.o : namesp.cpp
	g++ -c namesp.cpp

.PHONY : all
all : usenmsp

clean :
		rm usenmsp usenmsp.o namesp.o