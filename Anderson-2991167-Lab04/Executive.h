/** -----------------------------------------------------------------------------
 *
 * @file  Executive.h
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 4
 * @brief This program will simulate a web browser.
 * @date 07/07/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include <string>
#include <fstream>
#include <iostream>
#include "Browser.h"
#include "List.h"

class Executive
{
	private:
		std::ifstream inFile;
		std::string fName;
		Browser* browser;
	
	
	
	public: 
		bool validFile;
		//bool used to determine if the file is valid
		Executive(std::string fileName);//constructor takes in a file name
		//returns nothing
		~Executive();//destructor
		void run();//execute! deals with the file and anything it has to throw at the program
};
#endif