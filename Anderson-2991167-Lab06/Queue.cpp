/** -----------------------------------------------------------------------------
 *
 * @file  Queue.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 6
 * @brief This program will time a few of our data structures.
 * @date 07/21/2021
 *
 ---------------------------------------------------------------------------- **/
#include "Queue.h"
#include <stdexcept>
Queue::Queue()
{
  m_front = nullptr;
  m_back = nullptr;
}

void Queue::enqueue(int entry)
{
  Node* tempNode = new Node(entry);
  if(isEmpty()){ 
    m_back = tempNode;
    m_front = tempNode;
  }
  else{
    m_back->setNext(tempNode);
    m_back = m_back->getNext();
  }
}

void Queue::dequeue()
{
  if(isEmpty())
  {
    throw (std::runtime_error("\nERROR: Dequeue attempted on an empty queue"));
  }
  else
  {
    Node* tempNode = m_front; 
    m_front = m_front->getNext(); 
    if(m_front == nullptr)
	{
      m_back = nullptr;
    }
    tempNode->setNext(nullptr);
    delete tempNode;          
  }
}

int Queue::peekFront() const
{
  if(isEmpty())
  {
    throw (std::runtime_error("\nERROR: Peek attempted on an empty queue"));
  }
  else
  {
    return(m_front->getEntry());
  }
}

bool Queue::isEmpty() const
{
  if(m_front == nullptr && m_back == nullptr)
  {
    return true;
  }
  return false;
}
