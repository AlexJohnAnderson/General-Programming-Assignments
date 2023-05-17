#ifndef LIST_H
#define LIST_H
#include "Node.h"
class List
{
	private:

	Node* m_front;
	/**
	* @pre None
	* @post Node* to keep track of the front of the list
	* @param None
	*/

	int m_size;
	/**
	* @pre None
	* @post int to keep reack of the size of the list; returns size as int
	* @param None
	*/

	public:
	List();
	/**
	* @pre None
	* @post constructor sets the front of the list equal to nullptr and the size of the list to 0; returns nothing
	* @param None
	*/

	~List();
	/**
	* @pre None
	* @post destructor calls clear to delete the list; returns nothing
	* @param None
	*/

  bool isEmpty();
  /**
  * @pre None
  * @post Returns true if list is empty, otherwise returns false
  * @param none
  */

  int getLength() const;
  /**
  * @pre None
  * @post returns the size of the list as an int
  * @param None
  */

	void insert(int index, int entry);
	/**
	* @pre None
	* @post inserts a node at index and inserts the entry into the node; returns nothing
	* @param index to insert node and entry to assign to the node
	*/

	void delete(int entry);
	/**
	* @pre None
	* @post removes a node at an index; returns nothing
	* @param entry that is to be removed
	* @throw throw std::runtime error if no such entry exists
	*/

  bool find(int entry);
  /**
  * @pre None
  * @post finds a given entry
  * @param entry that is to be found
  * @throw throw std::runtime error if no such entry exists
  */


  void clear();
  /**
  * @pre None
  * @post clears the list; returns nothing
  * @param None
  */

	int getEntry(int index) const;
	/**
	* @pre invalid index
	* @post returns the entry of a node at an index
	* @param index to get the entry from
	*/

	void setEntry(int index, int entry);
	/**
	* @pre cannot set an entry to an invalid index
	* @post Sets an entry at a specific index; returns nothing
	* @param index of the entry and the entry itself
	*/

	Node* getFront() const;
	/**
	* @pre None
	* @post Returns the front node as a node pointer
	* @param None
	*/

};
#endif
