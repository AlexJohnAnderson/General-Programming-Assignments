/** -----------------------------------------------------------------------------
 *
 * @file  Queue.h
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 6
 * @brief This program will time a few of our data structures.
 * @date 07/21/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef QUEUE_H
#define QUEUE_H
#include "Node.h"
class Queue
{
	private:
	Node* m_front;
	/**
	* @pre None
	* @post Node pointer to keep track of the front
	* @param None
	*/
	Node* m_back;
	/**
	* @pre None
	* @post Node pointer to keep track of the back
	* @param None
	*/
	
	public:
	Queue();
	/**
	* @pre None
	* @post sets both node pointers to be looking at nullptr; returns nothing
	* @param None
	*/
	~Queue();
	/**
	* @pre none
	* @post deletes both node pointers ; returns nothing
	* @param None
	*/
	void enqueue(int entry);
	/**
	* @pre check if node that is added will be the first
	* @post New node will be added to the queue; returns nothing
	* @param entry that will be inside of the node
	*/
	void dequeue();
	/**
	* @pre The queue must not be empty
	* @post removes the front node in the queue; returns nothing
	* @param none
	* @throw std::runtime_error if the queue is empty
	*/
	int peekFront() const;
	/**
	* @pre the queue must not be empty
	* @post returns the value in the front node as an int  
	* @param None
	* @throw std::runtime_error if the queue is empty
	*/
	bool isEmpty() const;
	/**
	* @pre None
	* @post returns true if m_front and m_back are both looking at nullptr  
	* @param None
	*/
};

#endif
	