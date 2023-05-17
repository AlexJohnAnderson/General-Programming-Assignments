/** -----------------------------------------------------------------------------
 *
 * @file  ShapeContainer.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 3
 * @brief This program will take information about shapes from a file that allows
		  the user to add, remove, and print data about the shapes via commands in the file.
 * @date 07/01/2021
 *
 ---------------------------------------------------------------------------- **/
#include "ShapeContainer.h"
ShapeContainer::ShapeContainer(int size)
{
	m_size = size;
	m_arrayOfShapes = new Shape*[m_size];
}

ShapeContainer::~ShapeContainer()
{
	for(int i=0; i<m_size; i++)
	{
		m_arrayOfShapes = nullptr;
	}
	delete m_arrayOfShapes;
}

double ShapeContainer::area(int index) const //index could be invalid
{
	if(index < 0 || index >= m_size)
	{
		throw(std::runtime_error("Error: Invalid Index"));
	}
	else if(m_arrayOfShapes[index] == nullptr)
	{
		throw(std::runtime_error("Error: Shape not available"));
	}
	else
	{
		return m_arrayOfShapes[index]->area();
	}
}

std::string ShapeContainer::shapeName(int index) const //index could be invalid or nullptr
{
	if(index < 0 || index >= m_size)
	{
		throw(std::runtime_error("Error: Invalid Index"));
	}
	else if(m_arrayOfShapes[index] == nullptr)
	{
		throw(std::runtime_error("Error: Shape not available"));
	}
	else
	{
		return m_arrayOfShapes[index]->shapeName();
	}
}

void ShapeContainer::add(Shape* shapePtr, int index)//index could be invalid or nullptr
{
	if(index < 0 || index >= m_size)
	{
		throw(std::runtime_error("Error: Invalid Index"));
	}
	//else if(m_arrayOfShapes[index] == nullptr)
	//{
	//	throw(std::runtime_error("\nError: Shape not available"));
	//}
	else
	{
		m_arrayOfShapes[index] = shapePtr;//initialize shapePtr
	}
}

void ShapeContainer::remove(int index)
{
	if(index < 0 || index >= m_size)
	{
		throw(std::runtime_error("Error: Invalid Index"));
	}
	else if(m_arrayOfShapes[index] == nullptr)
	{
		throw(std::runtime_error("Error: Shape not available"));
	}
	else
	{
		m_arrayOfShapes[index] = nullptr;
	}
}