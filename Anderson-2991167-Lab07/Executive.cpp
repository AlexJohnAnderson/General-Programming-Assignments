/** -----------------------------------------------------------------------------
 *
 * @file  Executive.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 5
 * @brief This program will allow the user to choose what to do with a BST
 * @date 03/09/2022
 *
 ---------------------------------------------------------------------------- **/

#include "Executive.h"
Executive::Executive(std::string fileName)
{
	inputFile.open(fileName);
	if(validFile())
	{
		int id1;
		int id2;
		int id3;
		int id4;
		int id5;
 		int id6;
		int id7;
		int id8;
		int id9;
		int id10; 
		
		while(inputFile >> id1 >> id2 >> id3 >> id4 >> id5 >> id6 >> id7 >> id8 >> id9 >> id10)
		{
			tree.add(id1);
			tree.add(id2);
			tree.add(id3);
			tree.add(id4);
			tree.add(id5);
 			tree.add(id6);
			tree.add(id7);
			tree.add(id8);
			tree.add(id9);
			tree.add(id10); 
		}
	}
	else
	{
		throw(std::runtime_error("\nERROR: Invalid file"));
	}
}

bool Executive::validFile()
{
	if(inputFile.is_open())
	{
		return true;
	}
	return false;
}

Executive::~Executive()
{
	
}

void Executive::printMenu()
{
	std::cout << "\n--------------------\n";
	std::cout << "\n1. Insert\n2. Delete Min\n3. Delete Max\n4. Delete\n5. Find Min\n6. Find Max\n7. Preorder\n8. Inorder\n9. Spiral Level Order\n10. Left Side View\n11. Exit\n";
	std::cout << "\n--------------------\n";
}

void Executive::run()
{
	int choice;
	do
	{
		printMenu();
		std::cout << "\nEnter an action(1-11) to perform on the tree: ";
		std::cin >> choice;
		std::cout << "\n--------------------\n";
		if(choice == 1)
		{
			int id;
			std::cout << "\nPlease enter an integer to insert: ";
			std::cin >> id;
			tree.add(id);
		}
		else if(choice == 2)
		{
			
		}
		else if(choice == 3)
		{

		}
		else if(choice == 4)
		{
			int id;
			std::cout << "\nPlease enter an integer to insert: ";
			std::cin >> id;
			tree.remove(id);
		}
		else if(choice == 5)
		{
			std::cout<< "\nCurrent Minimum: " << tree.execfindMin()<< '\n';
		}
		else if(choice == 6)
		{
			std::cout<< "\nCurrent Maximum: " << tree.execfindMax()<< '\n';
		}
		else if(choice == 7)
		{
			std::cout << "Pre-Order traversal: ";
			tree.visitPreOrder();
		}
		else if(choice == 8)
		{
			std::cout << "In-Order traversal: ";
			tree.visitInOrder();
		}
		else if(choice == 9)
		{
			std::cout << "In-Order traversal: ";
			tree.visitInOrder();
		}
		else if(choice == 10)
		{

		}
		else
		{
			std::cout << "\nPlease enter a valid option(1-11)!\n";
	}while(choice != 11);

	if(choice == 11)
	{
		std::cout << "\nDemonstration complete! Exiting normally.\n";
		exit(1);
	}
	
		
}