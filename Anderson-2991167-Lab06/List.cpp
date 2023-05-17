/** -----------------------------------------------------------------------------
 *
 * @file  List.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 6
 * @brief This program will time a few of our data structures.
 * @date 07/21/2021
 *
 ---------------------------------------------------------------------------- **/
#include "List.h"
#include <stdexcept>
List::List()
{
	m_front = nullptr;
	m_size = 0;
}

List::~List()
{
	clear();
}

void List::insert(int index, int entry)
{
	if(index < 0 || index > m_size)
	{
		throw(std::runtime_error("\nERROR Invalid index at insert function\n"));
	}
	if(index == 0)
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

void List::remove(int index)
{
  if(index < 0 || index >= m_size)
  {
    throw(std::runtime_error("\nERROR Invalid index at remove function"));
  }

  if(index == 0)
  {
    Node* tempNode = m_front;
    m_front = m_front->getNext();
    tempNode->setNext(nullptr);
    delete tempNode;
  }
  else
  {
    Node* jumper = m_front;
    int count=0;
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

int List::getEntry(int index) const
{
	Node* jumper = m_front;
    int count=0;
	
	while(count != index)
	{
		jumper = jumper->getNext();
		count++;
	}
	
	return jumper->getEntry();
}

void List::clear()
{
	while(m_size > 0)
	{
		remove(0);
	}
}

void List::setEntry(int index, int entry)
{
	Node* jumper = m_front;
	int count=0;
	while(count != index)
	{
		jumper = jumper->getNext();
		count++;
	}
	
	jumper->setEntry(entry);
}

Node* List::getFront() const
{
	return m_front;
}

int List::getSize() const
{
	return m_size;
}
