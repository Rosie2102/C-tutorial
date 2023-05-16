all: bankacct.o
	g++ -Wall -g -o main.o bankacct.o
bankacct.o:  bankacct.h bankacct.cpp
	g++ -c  -Wall -g bankacct.cpp

cleanup:
	rm -rf *.o