/** -----------------------------------------------------------------------------
 *
 * @file  BrowserInterface.h
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 4
 * @brief This program will simulate a web browser.
 * @date 07/07/2021
 *
 ---------------------------------------------------------------------------- **/
#include "ListInterface.h"
#include "List.h"
#include <string>

class BrowserInterface
{
  public:
  /**
  * @post All memory allocated by the implementing class should be freed. 
  *       This, as with all virtual destrucors, is an empty definition since we
  *       have no knowledge of specific implementation details.
  */
  virtual ~BrowserInterface(){} 

  /**
  * @pre none
  * @post the browser navigate to the given url
  * @param url, a string representing a URL
  */
  virtual void navigateTo(std::string url) = 0;

  /**
  * @pre none
  * @post if possible, the browser navigates forward in the history otherwise it keeps focus
  *         on the current URL
  */
  virtual void forward() = 0;

  /**
  * @pre none
  * @post if possible, the browser navigates backwards in the history otherwise it keeps focus
  *         on the current URL 
  */
  virtual void back() = 0;

  /**
  * @return the current URL 
  */
  virtual std::string current() const = 0;

  /**
  * @pre The list being passed in is empty
  * @post The current browser history is copied into the given list  
  * @param destination, an empty list of strings
  */
  virtual void copyCurrentHistory(ListInterface<std::string>& destination) = 0;
};