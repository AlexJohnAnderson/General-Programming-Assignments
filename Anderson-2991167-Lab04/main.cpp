/** -----------------------------------------------------------------------------
 *
 * @file  main.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 4
 * @brief This program will simulate a web browser.
 * @date 07/07/2021
 *
 ---------------------------------------------------------------------------- **/
#include <stdexcept>
#include <iostream>
#include "Executive.h"
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