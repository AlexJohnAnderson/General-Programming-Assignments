/** -----------------------------------------------------------------------------
 *
 * @file  BSTInterface.h
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 7
 * @brief This program will allow the user to choose what to do with a BST
 * @date 07/29/2021
 *
 ---------------------------------------------------------------------------- **/
//template <typename ItemType, typename KeyType>
#include "Pokemon.h"
class BSTInterface
{
    public:
    virtual ~BSTInterface(){}
    virtual void add(Pokemon entry) = 0; //throws std::runtime_error if duplicate added
    virtual Pokemon search(int id) const = 0; //throws std::runtime_error if not in tree
    virtual void clear() = 0;
    virtual void remove(int id) = 0; //throws std::runtime_error if not in tree

    //For the following methods, each method will take a function as a parameter
    //These function then call the provided function on every entry in the tree in the appropriate order (i.e. pre, in, post)
    //The function you pass in will need to a static method
    virtual void visitPreOrder(void visit(Pokemon)) const = 0; //Visits each node in pre order
    virtual void visitInOrder(void visit(Pokemon)) const = 0; //Visits each node in in order
    virtual void visitPostOrder(void visit(Pokemon)) const = 0; //Visits each node in post order
};