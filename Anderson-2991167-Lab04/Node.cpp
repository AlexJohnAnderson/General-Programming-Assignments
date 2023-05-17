/** -----------------------------------------------------------------------------
 *
 * @file  Node.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 4
 * @brief This program will simulate a web browser.
 * @date 07/07/2021
 *
 ---------------------------------------------------------------------------- **/
#include "Node.h"
Node::Node(std::string nEntry){
  setEntry(nEntry);
  setNext(nullptr);
}

void Node::setEntry(std::string nEntry){
  entry = nEntry;
}

std::string Node::getEntry() const{
  return entry;
}

void Node::setNext(Node* next){
  m_next = next;
}

Node* Node::getNext() const{
  return m_next;
}
