/** -----------------------------------------------------------------------------
 *
 * @file  Executive.h
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 5
 * @brief This program will simulate a blob invasion!
 * @date 07/14/2021
 *
 ---------------------------------------------------------------------------- **/
 #ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include <string>
#include <fstream>
#include <stdexcept>
#include <iostream>
#include "Map.h"
class Executive
{
	private:
	std::ifstream inputFile;
	//ifstream variable to be able to assign our input to the 2-D array
	std::string fName;
	//string variable to assign the file to
	Map* map;
	//pointer to map
	int startRow;
	//int that keeps track of the start row
	int startCol;
	//int that keeps track of the start column
	void navigateMap(int row, int col);
	//recursive function that will allow the blob to traverse each available
	//street char in the input file
	void printMap();
	//prints the entire 2-D array of the map
	
	
	public:
	Executive(std::string fileName);
	//constructor takes in a file name and assigns it to fName, returns nothing
	~Executive();
	//destructor will close the file, returns nothing
	bool validFile();
	//bool to determine if the file is open or not
	//no parameters, returns true or false
	void run();
	//run function that deals with assigning the file input to the 2-D
	//array and begins the recursion. takes in nothing and returns nothing
};
#endif