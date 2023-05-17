/** -----------------------------------------------------------------------------
 *
 * @file  Circle.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 3
 * @brief This program will take information about shapes from a file that allows
		  the user to add, remove, and print data about the shapes via commands in the file.
 * @date 07/01/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef CIRCLE_H
#define CIRCLE_H
#include <string>
#include <cmath>
#include <iostream>
#include "Shape.h"
class Circle : public Shape

{
	private:
		double m_radius;
	
	public:
		Circle(double radius);;//constructor, takes in parameters of shape. 
		//returns nothing
		~Circle();//destructor
		//returns nothing
		virtual double area() const;
		//returns the product of R^2 and pi
		virtual std::string shapeName() const;
		//returns the name of the shape(i.e. Circle)
};
#endif