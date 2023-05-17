/** -----------------------------------------------------------------------------
 *
 * @file  BST.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 5
 * @brief This program will allow the user to choose what to do with a BST
 * @date 03/09/2022
 *
 ---------------------------------------------------------------------------- **/
#include "BST.h"
#include <stdexcept>
#include <math.h>

//template <typename ItemType, typename KeyType>
BST::BST()
{
	m_root = nullptr;
}


//template <typename ItemType, typename KeyType>
void BST::clear()
{
	doClear(m_root);
}

//template <typename ItemType, typename KeyType>
void BST::doClear(BNode* subtree)
{
	if(subtree->getLeft() != nullptr)
	{
		doClear(subtree->getLeft());
	}
	if(subtree->getRight() != nullptr)
	{
		doClear(subtree->getRight());
	}
	delete subtree;
}

//template <typename ItemType, typename KeyType>
BST::~BST()
{
	clear();
}

//template <typename ItemType, typename KeyType>
void BST::doCopy(BNode* jumper)
{
	if(jumper != nullptr)
	{
		add(jumper->getEntry());
		doCopy(jumper->getLeft());
		doCopy(jumper->getRight());
	}
}
		

//template <typename ItemType, typename KeyType>
void BST::operator=(const BST& rhs)
{
	BNode* jumper = rhs.m_root;
	doCopy(jumper);
}

//template <typename ItemType, typename KeyType>
void BST::add(int entry)
{
	 if(m_root == nullptr)
	 {
		 m_root = new BNode(entry);
	 }
	 else
	 {
		 doAdd(entry, m_root);
	 }
}

//template <typename ItemType, typename KeyType>
void BST::doAdd(int entry, BNode* subtree)
{
	
	if(subtree->getEntry() == entry)
	{
		doAdd(entry, subtree->getRight());
	}
	else if(subtree->getEntry() > entry)
	{
		if(subtree->getLeft() == nullptr)
		{
			BNode* target = new BNode(entry);
			subtree->setLeft(target);
		}
		else
		{
			doAdd(entry, subtree->getLeft());
		}
			
	}
	else if(subtree->getEntry() < entry)
	{
		if(subtree->getRight() == nullptr)
		{
			BNode* target = new BNode(entry);
			subtree->setRight(target);
		}
		else
		{
			doAdd(entry, subtree->getRight());
		}
	}
}

//template <typename ItemType, typename KeyType>
int BST::search(int key) const 
{
	if(m_root == nullptr)
	{
		throw(std::runtime_error("\nERROR: Tree does not exist\n"));
	}

	else
	{
		return(doSearch(key, m_root));
	}
}

//template <typename ItemType, typename KeyType>
int BST::doSearch(BNode* subtree, int entry) const
{
	if(subtree->getEntry() == key)
	{
		return(subtree->getEntry());
	}
	else if(subtree->getEntry() < key)
	{
		return(doSearch(key, subtree->getRight()));
	}
	else if(subtree->getEntry() > key)
	{
		return(doSearch(key, subtree->getLeft()));
	}
	else
	{
		throw(std::runtime_error("\nERROR: Object does not exist in tree\n"));
	}
}


//template <typename ItemType, typename KeyType>
void BST::remove(int entry)
{
	if(m_root == nullptr)
	{
		throw(std::runtime_error("\nERROR: The tree is alredy empty\n"));
	}
	else 
	{
		doRemove(m_root, entry);
	}
}

//template <typename ItemType, typename KeyType>
void BST::doRemove(int entry, BNode* subtree)
{
	if(subtree == nullptr)
	{
		throw(std::runtime_error("\nERROR: subtree does not exist\n"));
	}
	
	if(subtree->getEntry() == entry)
	{
		if(subtree->getLeft() == nullptr && (subtree->getRight() == nullptr))
		{
			delete subtree;
		}
		else if(subtree->getLeft() == nullptr)
		{
			BNode* temp = subtree->getRight();
			subtree = temp;
			delete temp;
			delete subtree;
		}
		else if(subtree->getRight() == nullptr)
		{
			BNode* temp = subtree->getLeft();
			subtree = temp;
			delete temp;
			delete subtree;
		}
		else if(subtree->getLeft() != nullptr && (subtree->getRight() != nullptr))
		{
			BNode* temp;
			int tentry = findMin(subtree->getLeft)
			temp->setEntry(tentry);
			subtree = temp;
			delete temp;
			delete subtree;
		} 
	
	}

	else if(subtree->getEntry() > entry)
	{
		doRemove(subtree->getLeft(), entry);
	}
	else if(subtree->getEntry() < entry)
	{
		doRemove(subtree->getRight(), entry);
	}

}

//template <typename ItemType, typename KeyType>
void BST::visitPreOrder() const
{
	if(m_root == nullptr)
	{
		throw(std::runtime_error("\nERROR: Traversal attempted on tree that is empty tree."));
	}
	else
	{
		doPreOrder(m_root);
	}
}

//template <typename ItemType, typename KeyType>
void BST::doPreOrder(BNode* subtree) const
{
	std::cout << subtree->getEntry() << " ";

	if(subtree->getLeft() != nullptr)
	{
		doPreOrder(subtree->getLeft());
	}
	
	if(subtree->getRight() != nullptr)
	{
		doPreOrder(subtree->getRight());
	}
}

//template <typename ItemType, typename KeyType>
void BST::visitInOrder() const
{
	if(m_root == nullptr)
	{
		throw(std::runtime_error("\nERROR: Traversal attempted on tree that is empty tree."));
	}
	else
	{
		doInOrder(m_root);
	}
}

//template <typename ItemType, typename KeyType>
void BST::doInOrder(BNode* subtree) const
{
	if(subtree->getLeft() != nullptr)
	{
		doInOrder(subtree->getLeft());
	}

	std::cout << subtree->getEntry() << " ";

	if(subtree->getRight() != nullptr)
	{
		doInOrder(subtree->getRight());
	}

}

//template <typename ItemType, typename KeyType>
void BST::visitPostOrder() const
{
	if(m_root == nullptr)
	{
		throw(std::runtime_error("\nERROR: Traversal attempted on tree that is empty tree."));
	}
	else
	{
		doPostOrder(m_root);
	}

}

//template <typename ItemType, typename KeyType>
void BST::doPostOrder(BNode* subtree) const
{
	if(subtree->getLeft() != nullptr)
	{
		doPostOrder(subtree->getLeft());
	}
	
	if(subtree->getRight() != nullptr)
	{
		doPostOrder(subtree->getRight());
	}

	std::cout << subtree->getEntry() << " ";
}

int BST::execfindMax()
{
	if(m_root == nullptr)
	{
		throw(std::runtime_error("ERROR: tree does not exist"));
	}
	else
	{
		return(findMax(m_root));
	}
}

//template <typename ItemType, typename KeyType>
int BST::findMax(BNode* subtree)
{
	if(subtree == nullptr)
	{
		throw(std::runtime_error("ERROR: tree does not exist"));
	}
	
	while(subtree->getRight() != nullptr)
	{
		subtree = subtree->getRight();
	}
	
	int entry = subtree->getEntry();

	return(entry);
}

int BST::execfindMin()
{
	if(m_root == nullptr)
	{
		throw(std::runtime_error("ERROR: tree does not exist"));
	}
	else 
	{
		return(findMin(m_root));
	}
}

//template <typename ItemType, typename KeyType>
int BST::findMin(BNode* subtree)
{
	if(subtree == nullptr)
	{
		throw(std::runtime_error("ERROR: tree does not exist"));
	}
	
	while(subtree->getLeft() != nullptr)
	{
		subtree = subtree->getLeft();
	}
	
	int entry = subtree->getEntry();
	
	return(entry);
}

//template <typename ItemType, typename KeyType>
void BST::visitLevelOrder() const
{
	if(m_root == nullptr)
	{
		throw(std::runtime_error("\nERROR: Traversal attempted on tree that is empty tree."));
	}
	else
	{
		doLevelOrder(m_root);
	}
}

//template <typename ItemType, typename KeyType>
void BST::doLevelOrder(BNode* subtree) const
{
	std::cout << subtree->getEntry() << " ";
	
	if(subtree->getLeft() != nullptr)
	{
		doLevelOrder(subtree->getLeft());
	}
	
	if(subtree->getRight() != nullptr)
	{
		doLevelOrder(subtree->getRight());
	}
}