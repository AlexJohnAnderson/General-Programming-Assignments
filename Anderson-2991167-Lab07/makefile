prog: main.o Executive.o BST.o Pokemon.o 
	g++ -g -std=c++11 -g -Wall main.o Executive.o BST.o Pokemon.o -o prog

Executive.o: Executive.h Executive.cpp 
	g++ -g -std=c++11 -g -c -Wall Executive.cpp

BST.o: BSTInterface.h BST.h BNode.h BNode.cpp BST.cpp 
	g++ -g -std=c++11 -g -c -Wall BST.cpp

Pokemon.o: Pokemon.h Pokemon.cpp 
	g++ -g -std=c++11 -g -c -Wall Pokemon.cpp

main.o: main.cpp 
	g++ -g -std=c++11 -g -c -Wall main.cpp

clean:
	rm *.o prog