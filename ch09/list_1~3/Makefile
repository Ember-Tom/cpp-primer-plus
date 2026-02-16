coordin : file1.o file2.o
		g++ -o coordin file1.o file2.o

file1.o : file1.cpp
		g++ -c file1.cpp

file2.o : file2.cpp
		g++ -c file2.cpp

.PHONY : all
all : coordin

clean :
		rm coordin file1.o file2.o