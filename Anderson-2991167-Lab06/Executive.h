/** -----------------------------------------------------------------------------
 *
 * @file  Executive.h
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 6
 * @brief This program will time a few of our data structures.
 * @date 07/21/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H

class Executive
{
	private:
	void timeOps(int op);
	/**
	* @pre None
	* @post Returns all of the data that times each of our data structure functions
	* @param integer named op which is passed in to the function to iterate through each of the six exercises
	*/
	
	public:
	Executive();
	/**
	* @pre None
	* @post Since we are not dealing with file io, our constructor does very little; returns nothing
	* @param None
	*/
	~Executive();
	/**
	* @pre None
	* @post since we are not dealing with file io there is no file to close after the program ends; returns nothing
	* @param None
	*/
	void run();
	/**
	* @pre None
	* @post run function calls the timeOps function and iterates through each of the 6 timing exercises
	* @param None
	*/
};
#endif