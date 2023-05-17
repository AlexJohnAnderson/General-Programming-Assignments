/** -----------------------------------------------------------------------------
 *
 * @file  BNode.h
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 7
 * @brief This program will allow the user to choose what to do with a BST
 * @date 07/29/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef BNODE_H
#define BNODE_H
#include <iostream>
#include "Pokemon.h"
template <typename T>
class BNode
{
	private:
	T m_entry;
	/**
	* @pre None
	* @post T variable to assign entires to nodes
	* @param None
	* @throw None
	*/

	BNode<T>* m_left;
	/**
	* @pre None
	* @post binary node pointer to the left node
	* @param none
	* @throw none
	*/

	BNode<T>* m_right;
	/**
	* @pre None
	* @post binary node pointer to the right node
	* @param none
	* @throw none
	*/

	
	public:
	BNode(T entry);
	/**
	* @pre None
	* @post sets the T entry to the private T m_entry, returns nothing
	* @param T entry to assign to the node
	* @throw 
	*/

	~BNode();
	/**
	* @pre None
	* @post Destructor, returns nothing
	* @param none
	* @throw none
	*/

	T getEntry();
	/**
	* @pre None
	* @post Returns the T entry at the node
	* @param none
	* @throw none
	*/

	BNode<T>* getLeft();
	/**
	* @pre None
	* @post Returns the left node as a node<T> pointer
	* @param none
	* @throw none
	*/

	BNode<T>* getRight();
	/**
	* @pre None
	* @post Returns the right node as a node<T> pointer
	* @param none
	* @throw none
	*/

	void setEntry(T entry);
	/**
	* @pre None
	* @post returns nothing
	* @param T entry to be set to current node
	* @throw none
	*/

	void setLeft(BNode<T>* bnode);
	/**
	* @pre None
	* @post returns nothing
	* @param T entry to be set to left node
	* @throw none
	*/

	void setRight(BNode<T>* bnode);
	/**
	* @pre None
	* @post returns nothing
	* @param T entry to be set to right node
	* @throw none
	*/

};
#include "BNode.cpp"
#endif
