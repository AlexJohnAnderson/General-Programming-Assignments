/** -----------------------------------------------------------------------------
 *
 * @file  Stack.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 6
 * @brief This program will time a few of our data structures.
 * @date 07/21/2021
 *
 ---------------------------------------------------------------------------- **/
 #include "Stack.h"
#include <stdexcept>
Stack::Stack()
{
	m_top = nullptr;
}

Stack::~Stack()
{
	delete m_top;
}
void Stack::push(int entry)
{
	
	Node* temp = new Node(entry);
	
	temp->setNext(m_top);
	
	m_top = temp;
}
void Stack::pop()
{
	if (!isEmpty())
	{
		Node* temp = m_top;
		m_top = m_top->getNext();
		temp->setNext(nullptr);
		delete temp;
	}
	
	else 
	{
		throw (std::runtime_error("Stack is empty"));
	}
}

int Stack::peek() const 
{
	if(!isEmpty()) 
	{
		return m_top->getEntry();
	}
	
	else 
	{
		throw (std::runtime_error("Stack is empty")); 
	}

}

bool Stack::isEmpty() const
{
	if (m_top == nullptr)
	{
		return true;
	}
	
	else
	{
		return false;
	}
}