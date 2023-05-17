/** -----------------------------------------------------------------------------
 *
 * @file  Pokemon.h
 * @author Alex Anderson 
 * Assignment:   EECS-268 Lab 7
 * @brief This program will allow the user to choose what to do with a BST
 * @date 07/29/2021
 *
 ---------------------------------------------------------------------------- **/
#ifndef POKEMON_H
#define POKEMON_H
#include <string>
class Pokemon 
{
	private:
	int pokedex;
	//int to assign id to entires/pokemon objects
	std::string usName;
	//english name for object
	std::string japName;
	//japanses name for object
	
	public:
	Pokemon();
	/**
	* @pre None
	* @post returns nothing
	* @param none
	* @throw none
	*/

	Pokemon(std::string name1, int id, std::string name2);
	/**
	* @pre None
	* @post returns nothing, constructs object
	* @param constructor takes in <USname><ID><JAPname> to assign to pokemon object
	* @throw none
	*/

	~Pokemon();
	/**
	* @pre none
	* @post destructor does nothing, returns nothing
	* @param none
	* @throw none
	*/

	static void printNames(Pokemon pokemon);
	/**
	* @pre None
	* @post returns japanses and american names as well as pokedex
	* @param Takes in a pokemon
	* @throw none
	*/

	


	void operator=(const Pokemon& rhs);
	bool operator==(const Pokemon& rhs);
	bool operator<(const Pokemon& rhs);
	bool operator>(const Pokemon& rhs);
	/**
	* @pre None
	* @post Operator overloaders, return bool
	* @param takes in pokemon object and entry it can compare with
	* @throw none
	*/

	bool operator==(int key);
	bool operator<(int key);
	bool operator>(int key);
	/**
	* @pre None
	* @post operator overloaders for key to compare with entries
	* @param Takes in a key to compare
	* @throw none
	*/


	
	
	
};
#endif
