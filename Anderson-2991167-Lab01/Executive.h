#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "BoardGames.h"
#include <string>
#include <fstream>
#include <iostream>
class Executive{
	
	private:
		int total; 	
		BoardGames* record;
	
	public:
		bool validFile;
		Executive(std::string filename);
		~Executive();
		void execute();
		void printOptions();
		void option1();//Print all games
		void option2();//Print all games from user given year
		void option3();//Pring all games within a user given ranking range
		void option4();//The people vs. Dr.Gibbons
		void option5();//Print all games less than or equal to a user given playtime 
		void option6();//Exit
};
#endif