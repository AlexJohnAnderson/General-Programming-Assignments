/** -----------------------------------------------------------------------------
 *
 * @file  Triangle.h
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 3
 * @brief This program will take information about shapes from a file that allows
		  the user to add, remove, and print data about the shapes via commands in the file.
 * @date 07/01/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"
#include <string>
class Triangle : public Shape
{
	private:
		double m_base;
		double m_height;
	
	public:
		Triangle(double base, double height);//constructor, takes in parameters of shape. 
		//returns nothing
		~Triangle();//destructor
		//returns nothing
		virtual double area() const;
		//returns the product of B and H divided by 2
		virtual std::string shapeName() const;
		//returns the name of the shape(i.e. Triangle)
};
#endif