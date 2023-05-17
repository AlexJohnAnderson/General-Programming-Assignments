/** -----------------------------------------------------------------------------
 *
 * @file  BST.h
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 5
 * @brief This program will allow the user to choose what to do with a BST
 * @date 03/09/2022
 *
 ---------------------------------------------------------------------------- **/
#ifndef BST_H
#define BST_H
#include <iostream>
#include "BNode.h"
#include <stdexcept>
#include "BSTInterface.h"
//template <typename ItemType, typename KeyType>
class BST : public BSTInterface
{

	private:
	BNode* m_root;
	//node pointer that keeps track of root
	int findMax(BNode* subtree);
	/**
	* @pre None
	* @post returns max value in subtree as node pointer
	* @param takes in subtree to traverse to largest value
	* @throw exception if subtree is empty
	*/
	
	int findMin(BNode* subtree);
	/**
	* @pre None
	* @post returns min value in subtree as node pointer
	* @param takes in subtree to traverse to largest value
	* @throw exception if subtree is empty
	*/

	void doAdd(int entry, BNode* subtree);
	/**
	* @pre must not be a duplicate
	* @post returns nothing
	* @param takes in an entry to add at as well as a pointer to a subtree
	* @throw exception if already in tree
	*/
	void doSearch(int entry, BNode* subtree);
	
	void doCopy(BNode* jumper);
	/**
	* @pre Must be the first and only copy
	* @post returns nothing
	* @param takes in a jumper to traverse the entire tree
	* @throw exception if copy already exists
	*/

	void doClear(BNode* subtree);
	/**
	* @pre none
	* @post returns nothing
	* @param T entry to be set to current node
	* @throw exception if trying to clear an empty tree
	*/

	void doRemove(BNode* subtree, int entry);
	/**
	* @pre target must exist
	* @post returns nothing
	* @param takes in key to match with entry as well as two pointers, one to the parent
	*        and the other to the subtree. 
	* @throw exception is subtree does not exist
	*/
	
	void doLevelOrder(BNode* subtree) const;
	void doPreOrder(BNode* subtree) const;
	void doInOrder(BNode* subtree) const;
	void doPostOrder(BNode* subtree) const;
	/**
	* @pre each of the traversals must travel through a tree that is not empty
	* @post returns nothing
	* @param Takes in subtree as well as a function named visit that essentially
	*	 calls the print name function from the object class
	* @throw exception is tree is empty
	*/
	
	int count;
	//keeps track of tree size.
	public:
	BST();
	/**
	* @pre None
	* @post sets root to nullptr
	* @param none
	* @throw none
	*/

	~BST();
	//calls clear function
	
	int execfindMax();
	int execfindMin();

	void operator=(const BST& rhs);
	//operatior overloader to compare entries

	void add(int entry);
	//takes in an entry and calls the doAdd function

	int search(int entry);
	
	void remove(int entry);
	//takes in a key and calls the doRemove function

	void clear();
	//throws excpetion is tree already cleared and calls the recursive clear function

	void visitLevelOrder() const;
	//traverses tree in level order
	
	void visitPreOrder() const;
	//calls the recursive Preorder function, throws exception if empty tree

	void visitInOrder() const;
	//calls the recursive inorder function, throws exception if empty tree

	void visitPostOrder() const;
	//calls the recursive post order function, throws exception if empty tree

	
};
#endif