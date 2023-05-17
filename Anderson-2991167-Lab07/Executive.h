/** -----------------------------------------------------------------------------
 *
 * @file  Executive.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 7
 * @brief This program will allow the user to choose what to do with a BST
 * @date 07/29/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include <fstream>
#include "BST.h"
#include "Pokemon.h"
#include <iostream>
#include <stdexcept>
class Executive
{
	private:
	std::ifstream inputFile;
	/**
	* @pre must be a valid file
	* @post opens the file that will be read in from
	* @param none
	* @throw an exeption if validFile = false
	*/

	bool validFile();
	/**
	* @pre None
	* @post boolean variable to check if file is valid, returns true or false
	* @param none
	* @throw none
	*/

	BST tree;
	/**
	* @pre None
	* @post binary search tree that will be used to store pokemon data
	* @param none
	* @throw none
	*/

	BST copyTree;
	/**
	* @pre None
	* @post copy of binary search tree, returns nothing
	* @param none
	* @throw none
	*/

	bool copyCreated;
	/**
	* @pre None
	* @post returns true or false depending on if a copy is already created
	* @param none
	* @throw none
	*/

	void printMenu();
	/**
	* @pre None
	* @post prints the menu for the user
	* @param none
	* @throw none
	*/

	
	public:
	Executive(std::string fileName);
	/**
	* @pre file must be valid
	* @post constructor returns nothing
	* @param Takes in a file that will be read in from
	* @throw exception if file is invalid
	*/

	~Executive();
	//destructor does nothing

	void run();
	/**
	* @pre runs as long as choice != 6(EXIT)
	* @post runs program depending on user choice
	* @param none
	* @throw none
	*/

};
#endif