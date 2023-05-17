/** -----------------------------------------------------------------------------
 *
 * @file  Pokemon.cpp
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 7
 * @brief This program will allow the user to choose what to do with a BST
 * @date 07/29/2021
 *
 ---------------------------------------------------------------------------- **/
#include "Pokemon.h"
#include <iostream>
Pokemon::Pokemon()
{
	
}

Pokemon::Pokemon(std::string name1, int id, std::string name2)
{
	pokedex = id;
	usName = name1;
	japName = name2;
}

Pokemon::~Pokemon()
{
	
}

void Pokemon::printNames(Pokemon pokemon)
{
	std::cout << "\n------------------------";
	std::cout <<"\nAmerican Name:" << pokemon.usName << '\n';
	std:: cout << "Pokedex:" << pokemon.pokedex << '\n';
	std::cout << "Japanses Name:" << pokemon.japName << '\n';	
}

void Pokemon::operator=(const Pokemon& rhs)
{
	pokedex = rhs.pokedex;
	usName = rhs.usName;
	japName = rhs.japName;
}

bool Pokemon::operator==(const Pokemon& rhs)
{
	if(pokedex == rhs.pokedex)
	{
		return(true);
	}
	return(false);
}

bool Pokemon::operator<(const Pokemon& rhs)
{
	if(pokedex < rhs.pokedex)
	{
		return(true);
	}
	return(false);
}

bool Pokemon::operator>(const Pokemon& rhs)
{
	if(pokedex > rhs.pokedex)
	{
		return(true);
	}
	return(false);
}

bool Pokemon::operator==(int key)
{
	if(pokedex == key)
	{
		return(true);
	}
	return(false);
}

bool Pokemon::operator<(int key)
{
	if(pokedex < key)
	{
		return(true);
	}
	return(false);
}

bool Pokemon::operator>(int key)
{
	if(pokedex > key)
	{
		return(true);
	}
	return(false);
}
