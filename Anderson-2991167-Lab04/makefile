prog: main.o Executive.o List.o Browser.o Node.o
	g++ -std=c++11 -g -Wall main.o Executive.o List.o Browser.o Node.o -o prog
	
main.o: main.cpp List.h List.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

clean: 
	rm *.o prog
