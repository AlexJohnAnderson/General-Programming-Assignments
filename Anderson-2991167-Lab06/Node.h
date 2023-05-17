#ifndef NODE_H
#define NODE_H

class Node
{
	private:
	int m_entry;
	/**
	* @pre None
	* @post integer variable to assign entries to nodes
	* @param None
	*/

	Node* m_next;
	/**
	* @pre None
	* @post Node* to keep track of next node in data structure
	* @param None
	*/

	public:
	Node(int entry);
	/**
	* @pre None
	* @post sets the entry to the private int m_entry; returns nothing
	* @param integer entry to assign to the node
	*/

	int getEntry() const;
	/**
	* @pre None
	* @post gets the next entry in the form of an int
	* @param none
	*/

	void setEntry(int entry);
	/**
	* @pre None
	* @post sets the next node as an integer entry ; returns nothing
	* @param integer entry that will be set as next node in the data structure
	*/

	Node* getNext() const;
	/**
	* @pre None
	* @post gets the next node in the data structure, returns next node
	* @param None
	*/

	void setNext(Node* next);
	/**
	* @pre None
	* @post sets the next node in the data structure; returns nothing
	* @param None
	*/

};
#endif
