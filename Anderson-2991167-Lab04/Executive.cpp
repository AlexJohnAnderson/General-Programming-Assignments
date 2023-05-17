/** -----------------------------------------------------------------------------
 *
 * @file  Executive.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 4
 * @brief This program will simulate a web browser.
 * @date 07/07/2021
 *
 ---------------------------------------------------------------------------- **/
#include "Executive.h"

Executive::Executive(std::string fileName)
{
	fName = fileName;
}

Executive::~Executive()
{
	delete browser;
}

void Executive::run()
{
	inFile.open(fName);
	std::string instruction;
	std::string url;
	browser = new Browser();
	
	if(inFile.is_open())
	{
		validFile = true;
		inFile >> instruction;
		if(instruction == "NAVIGATE")
		{
			inFile >> url;
			browser->navigateTo(url);
		}
		
		else if(instruction == "HISTORY")
		{
			List<std::string> temp;
			browser->copyCurrentHistory(temp);
			std::cout << "\nOldest" << "\n==========\n";
			
			for(int i = 0; i < temp.getSize(); i++)
			{
				std::cout << temp.getEntry(i) << std::endl;
				if(browser->current() == temp.getEntry(i))
				{
					std::cout << "\t=====current)";
				}
				std::cout << std::endl;
			}			
			std::cout << "==========\n";
			std::cout << "Newest\n";
     	}
		else if(instruction == "BACK")
		{
			browser->back();
		}
		else if(instruction == "FORWARD")
		{
			browser->forward();
		}
	}
	else
	{
		validFile = false;
	}
}