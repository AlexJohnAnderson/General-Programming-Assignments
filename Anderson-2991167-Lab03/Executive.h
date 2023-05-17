/** -----------------------------------------------------------------------------
 *
 * @file  Executive.h
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 3
 * @brief This program will take information about shapes from a file that allows
		  the user to add, remove, and print data about the shapes via commands in the file.
 * @date 07/01/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include <string>
#include <fstream>
#include <iostream>
#include "ShapeContainer.h"

class Executive
{
	private:
		std::ifstream inFile;
		std::string fName;
		ShapeContainer* shapeContainer;
	
	
	
	public: 
		bool validFile;
		//bool used to determine if the file is valid
		Executive(std::string fileName);//constructor takes in a file name
		//returns nothing
		~Executive();//destructor
		void run();//execute! deals with the file and anything it has to throw at the program
};
#endif