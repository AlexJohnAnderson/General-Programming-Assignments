/** -----------------------------------------------------------------------------
 *
 * @file  Stack.h
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 6
 * @brief This program will time a few of our data structures.
 * @date 07/21/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef STACK_H
#define STACK_H
#include "Node.h"
class Stack
{
	private:
	Node* m_top;
	/**
	* @pre None
	* @post Node* to keep track of the top of the stack
	* @param None
	*/

	public:
	Stack();
	/**
	* @pre None
	* @post sets the node* top to nullptr  
	* @param None
	*/
	~Stack();
	/**
	* @pre None
	* @post deletes the node* keeping track of the top 
	* @param None
	*/
	void push(int entry);
	/**
	* @pre None
	* @post Adds a new node to the top 
	* @param entry that will be inside of the node
	*/	
	void pop();
	/**
	* @pre the stack must not be empty
	* @post pops off the top node  
	* @param None
	* @throw std::runtime_error if the stack is empty
	*/
	int peek() const; 
	/**
	* @pre the stack must not be empty
	* @post peeks at the top node, returning it in the form of an int   
	* @param None
	* @throw std::runtime_error if the stack is empty
	*/
	bool isEmpty() const;
	/**
	* @pre none
	* @post returns true if m_top is looking at nullptr
	* @param None
	*/

};
#endif