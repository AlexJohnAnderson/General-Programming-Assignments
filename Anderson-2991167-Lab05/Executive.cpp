/** -----------------------------------------------------------------------------
 *
 * @file  Executive.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 5
 * @brief This program will simulate a blob invasion!
 * @date 07/14/2021
 *
 ---------------------------------------------------------------------------- **/
#include "Executive.h"
Executive::Executive(std::string fileName)
{
	fName = fileName;
}

Executive::~Executive()
{
	inputFile.close();
}

bool Executive::validFile()
{
	if(inputFile.is_open())
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Executive::navigateMap(int row, int col)
{
	if(map->getMapContent(row, col) == 'S')
	{
		map->setMapContent(row, col, 'B');
	}
	
		if(row-1 >= 0 && (map->getMapContent(row-1, col) == 'S'|| map->getMapContent(row-1, col) == '@'))
		{
			navigateMap(row-1, col);
		}
	
		if(col+1 < map->getColSize() && (map->getMapContent(row, col+1) == 'S'|| map->getMapContent(row, col+1) == '@'))
		{
			navigateMap(row, col+1);
		}
	
		if(row+1 < map->getRowSize() && (map->getMapContent(row+1, col) == 'S'|| map->getMapContent(row+1, col) == '@'))
		{
			navigateMap(row+1, col);
		}
	
		if(col-1 >= 0 && (map->getMapContent(row, col-1) == 'S'|| map->getMapContent(row, col-1) == '@'))
		{
			navigateMap(row, col-1);
		}	
		
	if(map->getMapContent(row, col)=='@')
	{
		map->setMapContent(row, col, 'B');
		for(int i=0; i<map->getRowSize(); i++)
		{
			for(int j=0; j<map->getColSize(); j++)
			{
				if(map->getMapContent(i, j) == '@')
				{
					navigateMap(i, j);
				}
			}
		}
	}
}

void Executive::printMap()
{
	for(int i=0; i<map->getRowSize(); i++)
	{
		std::cout << '\n';
		for(int j=0; j<map->getColSize(); j++)
		{
			std::cout << map->getMapContent(i, j) << "\t";
		}
	}
}

void Executive::run()
{
	
	inputFile.open(fName);
	
	if(validFile())
	{
		int row;
		int col;
		inputFile >> row;
		inputFile >> col;
		
		if(row < 1 || col < 1)
		{
			throw(std::runtime_error("\nERROR: Row and column sizes must be greater or equal to 1"));
		}
		inputFile >> startRow;
		inputFile >> startCol;
		if(startRow < 0 || startRow >= row || startCol < 0 || startCol >= col)
		{
			throw(std::runtime_error("\nERROR: start position must be in bounds of the map"));
		}
		map = new Map(row, col);//instantiation of map
		char val;
		for(int i = 0; i<row; i++)
		{
			for(int j=0; j<col; j++)
			{
				inputFile >> val;
				map->setMapContent(i, j, val);
			}
		}
		navigateMap(startRow, startCol);
		printMap();
	}
	else
	{
		throw(std::runtime_error("\nERROR: Invalid file."));
	}
}

	