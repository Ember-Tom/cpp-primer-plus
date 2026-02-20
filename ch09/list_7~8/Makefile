My : twofile1.o twofile2.o
	g++ -o My twofile1.o twofile2.o

twofile1.o : twofile1.cpp
	g++ -c twofile1.cpp

twofile2.o : twofile2.cpp
	g++ -c twofile2.cpp

.PHONY : all
all : My

clean : 
		rm My twofile1.o twofile2.o