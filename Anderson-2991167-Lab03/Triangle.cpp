/** -----------------------------------------------------------------------------
 *
 * @file  Triangle.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 3
 * @brief This program will take information about shapes from a file that allows
		  the user to add, remove, and print data about the shapes via commands in the file.
 * @date 07/01/2021
 *
 ---------------------------------------------------------------------------- **/
#include "Triangle.h"

Triangle::Triangle(double base, double height)
{
	m_base = base;
	m_height = height;
}

Triangle::~Triangle()
{
	
}

double Triangle::area() const
{
	return ((m_base * m_height)/2);
}

std::string Triangle::shapeName() const
{
  return "TRIANGLE";
}