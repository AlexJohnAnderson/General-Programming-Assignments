/** -----------------------------------------------------------------------------
 *
 * @file  Node.h
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 4
 * @brief This program will simulate a web browser.
 * @date 07/07/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef NODE_H
#define NODE_H
#include <string>
class Node{
  private:
    std::string entry;
    Node* m_next;

  public:
    Node(std::string nEntry);//constructor takes in a string
    //~Node();
    void setEntry(std::string nEntry);//set entry takes in a string and sets it to a node
    std::string getEntry() const;//get entry returns the string at an entry
    void setNext(Node* next);//set next sets a node* to be next in the list
    Node* getNext() const;//get next returns the next node* in the list.
};
#endif
