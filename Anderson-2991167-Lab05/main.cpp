/** -----------------------------------------------------------------------------
 *
 * @file  main.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 5
 * @brief This program will simulate a blob invasion!
 * @date 07/14/2021
 *
 ---------------------------------------------------------------------------- **/
#include <iostream>
#include <fstream>
#include "Executive.h"

int main(int argc, char** argv)
{
	if(argc != 2)
	{
		std::cout << "\nERROR: Filename needs to be passed";
	}
	else
	{
	    Executive exec(argv[1]);
		try
		{
			exec.run();
		}
		
		catch(std::runtime_error& e)
		{
			std::cout <<e.what();
		}
	}
}