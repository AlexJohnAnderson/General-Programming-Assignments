/** -----------------------------------------------------------------------------
 *
 * @file  Executive.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 3
 * @brief This program will take information about shapes from a file that allows
		  the user to add, remove, and print data about the shapes via commands in the file.
 * @date 07/01/2021
 *
 ---------------------------------------------------------------------------- **/
#include "Executive.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"


Executive::Executive(std::string fileName)
{
	fName = fileName;
}

Executive::~Executive()
{
  delete shapeContainer;
}

void Executive::run()
{
	inFile.open(fName);
		int tsize;
		std::string instruction;
		std::string tShape;
		double rad;
		double base;
		double height;
		double length;
		double width;
		int tIndex;
	if(inFile.is_open())
	{
		validFile = true;
		inFile >> tsize;
		shapeContainer = new ShapeContainer(tsize);
		
		do
		{
			
			inFile >> instruction;
			if(instruction == "ADD")
			{
				
				inFile >> tIndex;
				inFile >> tShape;
				if(tShape == "CIR")
				{
					inFile >> rad;
					Shape* shape = new Circle(rad);
					shapeContainer->add(shape,tIndex);
				}
				else if(tShape == "TRI")
				{
					inFile >> base;
					inFile >> height;
					Shape* shape = new Triangle(base, height);
					shapeContainer->add(shape,tIndex);
				}
				else if(tShape == "REC")
				{
					inFile >> length;
					inFile >> width;
					Shape* shape = new Rectangle(length, width);
					shapeContainer->add(shape,tIndex);
				}
			}
			else if(instruction == "DELETE")
			{
				inFile >> tIndex;
				shapeContainer->remove(tIndex);
				
			}
			else if(instruction == "PRINT")
			{
				inFile >> tIndex;
				try
				{
					std::cout << "\n The shape at index " << tIndex << " is: " <<shapeContainer->shapeName(tIndex);
					std::cout << "\n The area of this shape is: " << shapeContainer->area(tIndex) << '\n';
				}
				
				catch(std::runtime_error& e)
				{
			
					std::cout << e.what();
			
				}
			}
		}while(instruction != "EXIT");
	}
	else
	{
		validFile = false;
	}
}