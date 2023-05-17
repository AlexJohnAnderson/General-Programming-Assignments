/** -----------------------------------------------------------------------------
 *
 * @file  Rectangle.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 3
 * @brief This program will take information about shapes from a file that allows
		  the user to add, remove, and print data about the shapes via commands in the file.
 * @date 07/01/2021
 *
 ---------------------------------------------------------------------------- **/
#include "Rectangle.h"

Rectangle::Rectangle(double length, double width)
{
	m_length = length;
	m_width = width;
}

Rectangle::~Rectangle()
{
	
}

double Rectangle::area() const
{
	return (m_length * m_width);
}

std::string Rectangle::shapeName() const
{
  return "Rectangle";
}