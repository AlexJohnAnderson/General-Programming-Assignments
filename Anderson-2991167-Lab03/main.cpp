/** -----------------------------------------------------------------------------
 *
 * @file  main.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 3
 * @brief This program will take information about shapes from a file that allows
		  the user to add, remove, and print data about the shapes via commands in the file.
 * @date 07/01/2021
 *
 ---------------------------------------------------------------------------- **/
#include "Executive.h"
#include <iostream>
int main(int argc, char** argv)
{
	if(argc != 2)
	{
		std::cout << "\nUser should pass exectly two arguments";
	}
	else
	{
		Executive exec(argv[1]);

		if(exec.validFile)
		{
			exec.run();
		}
		else
		{
			std::cout << "\nInvalid File, try again";
		}
	}
		
	return(0);
}