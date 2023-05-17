prog: main.o Executive.o Stack.o Queue.o List.o Node.o
	g++ -std=c++11 -g -Wall main.o Executive.o Stack.o Queue.o List.o Node.o -o prog

Node.o: Node.cpp Node.h
	g++ -std=c++11 -g -Wall -c Node.cpp
	
List.o: List.cpp List.h Node.h
	g++ -std=c++11 -g -Wall -c List.cpp
	
Queue.o: Queue.cpp Queue.h Node.h
	g++ -std=c++11 -g -Wall -c Queue.cpp
	
Stack.o: Stack.cpp Stack.h Node.h
	g++ -std=c++11 -g -Wall -c Stack.cpp
	
Executive.o: Executive.cpp Executive.h Stack.h Queue.h List.h
	g++ -std=c++11 -g -Wall -c Executive.cpp

main.o: main.cpp Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp

clean:
	rm *.o prog
