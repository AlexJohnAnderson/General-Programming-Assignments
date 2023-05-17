/** -----------------------------------------------------------------------------
 *
 * @file  Browser.h
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 4
 * @brief This program will simulate a web browser.
 * @date 07/07/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef BROWSER_H
#define BROWSER_H
#include "BrowserInterface.h"
#include "List.h"
#include "Node.h"
#include <string>

class Browser : public BrowserInterface
{
	private:
	List<std::string>* list;
	Node* currentPtr;
	int currentIndex;

	public:
	Browser();
	~Browser();
	
	/**
    * @pre none
    * @post the browser navigate to the given url
    * @param url, a string representing a URL
    */
	void navigateTo(std::string url);
	
	/**
    * @pre none
    * @post if possible, the browser navigates forward in the history otherwise it keeps focus
    *       on the current URL
    */
	void forward();
	
	/**
	* @pre none
	* @post if possible, the browser navigates backwards in the history otherwise it keeps focus
	*       on the current URL 
	*/
	void back();
	
	/**
    * @return the current URL 
    */
	std::string current() const;
	
	/**
    * @pre The list being passed in is empty
    * @post The current browser history is copied into the given list  
    * @param destination, an empty list of strings
    */
	void copyCurrentHistory(ListInterface<std::string>& destination);
};
#endif
