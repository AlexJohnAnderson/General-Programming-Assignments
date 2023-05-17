/** -----------------------------------------------------------------------------
 *
 * @file  List.h
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 4
 * @brief This program will simulate a web browser.
 * @date 07/07/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef LIST_H
#define LIST_H
#include "Node.h"
#include <string>
#include <iostream>
#include <stdexcept>
#include "ListInterface.h"
template <typename T>
class List : public ListInterface<T>
{
	private:
	Node* m_front; 
	int m_size;

	public:
	List();
	~List();

    /**
    * @pre The index is valid
    * @post The entry is added to the list at the index, increasing length by 1
    * @param index, position to insert at (1 to length+1)
    * @param entry, value/object to add to the list
    * @throw std::runtime_error if the index is invalid
    */
	void insert(int index, T entry);
	
	/**
    * @pre The index is valid
    * @post The entry at given position is removed, reducing length by 1 
    * @param index, position to insert at (1 to length)
    * @throw std::runtime_error if the index is invalid
    */
	void remove(int index);
	
	 /**
    * @pre The index is valid
    * @post None 
    * @param index, position to insert at (1 to length)
    * @throw std::runtime_error if the index is invalid
    */
	T getEntry(int index) const;
	
	/**
    * @pre None
    * @post List is empty
    * @throw None
    */
	void clear();
	
	/**
    * @pre The index is valid (must already exist)
    * @post Given entry overrides the entry at the given index 
    * @param index, position to override at (1 to length)
    * @param entry, value/object to place at given index
    * @throw std::runtime_error if the index is invalid
    */
	void setEntry(int index, T entry);
	
	/**
    * @pre The index is valid (must already exist)
    * @post Returns Node* at the front 
    * @param none
    */
	Node* getFront() const;
	/**
    * @pre The index is valid (must already exist)
    * @post Returns an int that is size of list
    * @param none
    */
	int getSize() const;
};

#endif