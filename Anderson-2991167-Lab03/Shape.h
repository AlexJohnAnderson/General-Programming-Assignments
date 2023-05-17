/** -----------------------------------------------------------------------------
 *
 * @file  Shape.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 3
 * @brief This program will take information about shapes from a file that allows
		  the user to add, remove, and print data about the shapes via commands in the file.
 * @date 07/01/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef SHAPE_h
#define SHAPE_h
#include <string>
class Shape
{
   //all of the pure virtual methods
   //return nothing because there is
   //no definition for the
   //member functions of interfaces
   public:
   virtual double area() const = 0;
   virtual std::string shapeName() const = 0;
   virtual ~Shape() {}
};
#endif