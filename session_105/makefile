all: square.o shape.o
	g++ -Wall -g -o main.o shape.o square.o
#	chmod +x square.o
square.o: square.cpp square.h shape.o
	g++ -c  -Wall -g square.cpp
shape.o:  shape.h shape.cpp
	g++ -c  -Wall -g shape.cpp

cleanup:
	rm -rf *.o
