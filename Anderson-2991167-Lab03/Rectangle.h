/** -----------------------------------------------------------------------------
 *
 * @file  Rectangle.h
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 3
 * @brief This program will take information about shapes from a file that allows
		  the user to add, remove, and print data about the shapes via commands in the file.
 * @date 07/01/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
#include <string>
class Rectangle : public Shape
{
	private:
		double m_length;
		double m_width;
	
	public:
		Rectangle(double length, double width);//constructor, takes in parameters of shape. 
		//returns nothing
		~Rectangle();//destructor
		//returns nothing
		virtual double area() const;
		//returns the product of L and W
		virtual std::string shapeName() const;
		//returns the name of the shape(i.e. Rectangle)
};
#endif