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
#include "Circle.h"

Circle::Circle(double radius)
{
	m_radius = radius;
}

Circle::~Circle()
{
	
}

double Circle::area() const
{
	return (M_PI * m_radius * m_radius);
}

std::string Circle::shapeName() const
{
	return "CIRCLE";
}
