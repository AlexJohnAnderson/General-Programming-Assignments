/** -----------------------------------------------------------------------------
 *
 * @file  ShapeContainer.h
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 3
 * @brief This program will take information about shapes from a file that allows
		  the user to add, remove, and print data about the shapes via commands in the file.
 * @date 07/01/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef SHAPECONTAINER_H
#define SHAPECONTAINER_H
#include <stdexcept>
#include <string>
#include "Shape.h"
class ShapeContainer
{
   public:
   ShapeContainer(int size); //initialize pointers in m_arrayOfShapes to nullptr
   //returns nothing
   ~ShapeContainer();
   //returns nothing
   double area(int index) const; //throws a std::runtime_error if index is invalid, meaning out of range OR index has nullptr 
   //returns area of shape at index as a double
   std::string shapeName(int index) const; //throws a std::runtime_error if index is invalid, meaning out of range OR index has nullptr
   //returns the name of the shappe at index
   void add(Shape* shapePtr, int index); //throws a std::runtime_error if index is invalid OR if shapePtr is nullptr
  //returns nothing
   void remove(int index); //throws a std::runtime_error if the index is invalid OR there is no object to delete
   //returns nothing
   private:
   Shape** m_arrayOfShapes;
   int m_size;
};
#endif

