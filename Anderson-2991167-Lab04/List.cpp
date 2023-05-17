/** -----------------------------------------------------------------------------
 *
 * @file  List.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 4
 * @brief This program will simulate a web browser.
 * @date 07/07/2021
 *
 ---------------------------------------------------------------------------- **/
#include "List.h"
template <typename T>
List<T>::List()
{
	m_front = nullptr;
	m_size = 0;
}

template <typename T>
List<T>::~List()
{
	clear();
}

template <typename T>
void List<T>::insert(int index, T entry)
{
	//insert first Node
	if(index < 0 || index > m_size)
	{
		throw(std::runtime_error("\nERROR:Invalid index"));
	}
	else if(index == 0)
	{
		Node* tempNode = new Node(entry);
		m_front = tempNode;
	}
	else
	{
		Node* target = new Node(entry);
		Node* jumper = m_front;
		int count = 0;
		while(count != index-1)
		{
			jumper = jumper->getNext();
			count++;
		}
		Node* nodeBefore = jumper;
		Node* nodeAfter = jumper->getNext();
		nodeBefore->setNext(target);
		target->setNext(nodeAfter);
	}
	m_size++;
}

template <typename T>
void List<T>::remove(int index)
{
	if(index < 0 || index >= m_size)
	{
		throw(std::runtime_error("ERROR: Invalid index"));
	}
	else if(index == 0)
	{
		Node* tempNode = m_front;
		m_front = m_front->getNext();
		tempNode->setNext(nullptr);
		delete tempNode;
	}
	else
	{
			Node* jumper = m_front;
			int count = 0;
			while(count != index-1)
			{
				jumper = jumper->getNext();
				count++;
			}
			Node* nodeBefore = jumper;
			Node* target = jumper->getNext();
			Node* nodeAfter = target->getNext();
			nodeBefore->setNext(nodeAfter);
			target->setNext(nullptr);
			delete target;
	}
	m_size--;
}

template <typename T>
T List<T>::getEntry(int index) const
{
	Node* jumper = m_front;
	int count = 0;
	while(count != index)
	{
		jumper = jumper->getNext();
		count++;
	}
	return jumper->getEntry();
}

template <typename T>
void List<T>::clear()
{
	while(m_size > 0)
	{
		remove(0);
	}
}

template <typename T>
void List<T>::setEntry(int index, T entry)
{
	Node* jumper = m_front;
	int count = 0;
	while(count != index)
	{
		jumper = jumper->getNext();
		count++;
	}
	jumper->setEntry(entry);
}

template <typename T>
Node* List<T>::getFront() const
{
	return m_front;
}

template <typename T>
int List<T>::getSize() const
{
	return m_size;
}