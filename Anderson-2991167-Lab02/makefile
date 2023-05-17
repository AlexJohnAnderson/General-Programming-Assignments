prog: main.o Queue.o Stack.o
	g++ -g -std=c++11 -g -Wall main.o Queue.o Stack.o -o prog

main.o: main.cpp Queue.o Stack.o
	g++ -g -std=c++11 -g -Wall -c main.cpp

clean: 
	rm *.o prog
