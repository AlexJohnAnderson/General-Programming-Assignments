/** -----------------------------------------------------------------------------
 *
 * @file  main.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 7
 * @brief This program will allow the user to choose what to do with a BST
 * @date 07/29/2021
 *
 ---------------------------------------------------------------------------- **/
#include "Executive.h"
#include <stdexcept>
#include <iostream>
int main(int argc, char** argv)
{
	try
	{
		if(argc != 2)
		{
			throw(std::runtime_error("Please pass in correct number of arguments!"));
		}
		else
		{
			Executive exec(argv[1]);
			exec.run();
		}
	}
	catch(std::runtime_error& e)
	{
		std::cout << e.what();
	}
	return(0);
}