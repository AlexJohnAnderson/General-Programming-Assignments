/** -----------------------------------------------------------------------------
 *
 * @file  Browser.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 4
 * @brief This program will simulate a web browser.
 * @date 07/07/2021
 *
 ---------------------------------------------------------------------------- **/
#include "Browser.h"
Browser::Browser()
{
	list = new List<std::string>();
	currentPtr = nullptr;
	currentIndex = -1;
}

Browser::~Browser()
{
	delete list;
}

void Browser::navigateTo(std::string url)
{
	if(currentIndex == -1)
	{
		list->insert(currentIndex + 1, url);
		currentIndex++;
		currentPtr = list->getFront();
	}
	else
	{	
		list->insert(currentIndex + 1, url);
		currentIndex++;
		Node* jumper = list->getFront();
		
	
		while(list->getSize() != currentIndex + 1)
		{
			list->remove(currentIndex + 1);
		}
		
		currentPtr = jumper->getNext();
	}
	
	if(currentIndex != list->getSize() - 1)
	{
		for(int i = currentIndex + 1; i<list->getSize(); i++)
		{
			list->remove(i);
		}
	}
}


void Browser::forward()
{
	if(currentPtr->getNext() != nullptr)
	{
		currentPtr = currentPtr->getNext();
		currentIndex++;
	}
}

void Browser::back()
{
	Node* jumper = list->getFront();
	while(jumper->getNext() != currentPtr)
	{
		jumper = jumper->getNext();
		currentIndex--;
	}
		
}
std::string Browser::current() const
{
	return(currentPtr->getEntry());
}

void Browser::copyCurrentHistory(ListInterface<std::string>& destination)
{
	for(int i = 0; i < list->getSize(); i++)
	{
		destination.insert(i ,list->getEntry(i));
	}
}
	
	