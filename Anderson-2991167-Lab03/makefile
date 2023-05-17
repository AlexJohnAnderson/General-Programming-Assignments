prog: main.o Executive.o ShapeContainer.o Circle.o Triangle.o Rectangle.o
	g++ -std=c++11 -g -Wall main.o Executive.o ShapeContainer.o Circle.o Triangle.o Rectangle.o -o prog

Rectangle.o: Rectangle.cpp Rectangle.h
	g++ -std=c++11 -g -Wall -c Rectangle.cpp
	
Triangle.o: Triangle.cpp Triangle.h
	g++ -std=c++11 -g -Wall -c Triangle.cpp
	
Circle.o: Circle.cpp Circle.h
	g++ -std=c++11 -g -Wall -c Circle.cpp

ShapeContainer.o: ShapeContainer.cpp ShapeContainer.h
	g++ -std=c++11 -g -Wall -c ShapeContainer.cpp

Executive.o: Executive.cpp Executive.h
	g++ -std=c++11 -g -Wall -c Executive.cpp

main.o: main.cpp Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp

clean:
	rm *.o prog






