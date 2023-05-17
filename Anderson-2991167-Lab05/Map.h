/** -----------------------------------------------------------------------------
 *
 * @file  Map.h
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 5
 * @brief This program will simulate a blob invasion!
 * @date 07/14/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef MAP_H
#define MAP_H

class Map
{
	private:
		int rowSize;//keeps track of the row size of map
		int colSize;//keeps track of the column size of map
		char** map;//2d array to map the city for the blob
		
		
	public:
		
		Map(int row, int col);
		//constructor takes in row and column size which will be
		//assigned to the 2-D array.
		~Map();
		//deletes the 2-D array and returns nothing
		char getMapContent(int row, int col) const;
		//returns a char that is the content of the map 
		//at a given row and column index
		//map content getter
		void setMapContent(int row, int col, char val);
		//returns nothing, but takes in a val as well as a row
		//and column index and assigns val to the spot
		//map content setter
		int getRowSize() const;
		//returns row size in the form of an int
		int getColSize() const;
		//returns column size in the form of an int
};

#endif