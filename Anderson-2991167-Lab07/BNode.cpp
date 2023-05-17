/** -----------------------------------------------------------------------------
 *
 * @file  BNode.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 7
 * @brief This program will allow the user to choose what to do with a BST
 * @date 07/29/2021
 *
 ---------------------------------------------------------------------------- **/
#include "BNode.h"
template <typename T>
BNode<T>::BNode(T entry)
{
	m_entry = entry;
}

template <typename T>
BNode<T>::~BNode()
{
	
}

template <typename T>
T BNode<T>::getEntry()
{
	return(m_entry);
}
template <typename T>
BNode<T>* BNode<T>::getLeft()
{
	return(m_left);
}

template <typename T>
BNode<T>* BNode<T>::getRight()
{
	return(m_right);
}

template <typename T>
void BNode<T>::setLeft(BNode<T>* bnode)
{
	m_left = bnode;
}
template <typename T>
void BNode<T>::setRight(BNode<T>* bnode)
{
	m_right = bnode;
}

