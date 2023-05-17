/** -----------------------------------------------------------------------------
 *
 * @file  Map.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 5
 * @brief This program will simulate a blob invasion!
 * @date 07/14/2021
 *
 ---------------------------------------------------------------------------- **/
#include "Map.h"
Map::Map(int row, int col)
{
	rowSize = row;
	colSize = col;
	map = new char*[rowSize];
				
	for(int i = 0; i<rowSize; i++)
	{
	map[i] = new char[colSize];
	}
				
}

Map::~Map()
{
	for (int i=0; i<rowSize; i++)
	{
		delete[]map[i];
	}
	delete[] map;
	
}

char Map::getMapContent(int row, int col) const
{
	return map[row][col];
}

void Map::setMapContent(int row, int col, char val)
{
	map[row][col] = val;
}

int Map::getRowSize() const
{
	return rowSize;
}

int Map::getColSize() const
{
	return colSize;
}
