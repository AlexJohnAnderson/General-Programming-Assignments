#include "Executive.h"
#include <fstream>
#include <string>
#include <iostream>

Executive::Executive(std::string filename)
	{
		std::ifstream inputFile;
		inputFile.open(filename);
	
		if(inputFile.is_open())//proceeds if file is open
			{ 
				validFile = true; 
				inputFile >> total;
				record = new BoardGames[total];
				std::string tempBoardGame;
				double tempGibRate;
				double tempPubRate;
				int tempYear;
				int tempMinPlayers;
				int tempMinPlaytime;
				
				for(int i=0; i < total; i++)
					{
						inputFile >> tempBoardGame;
						inputFile >> tempGibRate;
						inputFile >> tempPubRate;
						inputFile >> tempYear;
						inputFile >> tempMinPlayers;
						inputFile >> tempMinPlaytime;
						
						record[i].setBoardGame(tempBoardGame);
						record[i].setGibRate(tempGibRate);
						record[i].setPubRate(tempPubRate);
						record[i].setYear(tempYear);
						record[i].setMinPlayers(tempMinPlayers);
						record[i].setMinPlaytime(tempMinPlaytime);
					}
			}
		else
			{
				validFile = false;
			}
	}
Executive::~Executive()
{
	delete record;
}
void Executive::printOptions()
{
	std::cout << "\n1. Print all Boardgames";//option1 
	std::cout << "\n2. Print all Boardgames from a given year";//option2
	std::cout << "\n3. Print all Boardgames within a given ranking system";//option3
	std::cout << "\n4. The peope vs. Dr.Gibbons";//option4
	std::cout << "\n5. Print all Boardgames less than or equal to a given playtime";//option5
	std::cout << "\n6. Exit";
}
//void Executive()
//{
//	std::cout << "Boardgame details";
//	for(int i=0; i < total; i++)
//	{
//		std::cout << "\n" << record[i].getBoardGame() << " "<< record[i].getGibRate() <<" "<< record[i].getPubRate() <<" "<< record[i].getYear() <<" "<< record[i].getMinPlayers() <<" "<< record[i].getMinPlaytime();
//	}
//}
void Executive::option1()//lists all games
{
	for(int i=0; i < total; i++)
	{
		std::cout << record[i].getBoardGame() << " ";
		std::cout << "(" << record[i].getYear() << ")" << "[" << "GR = " << record[i].getGibRate() << ",PR = " << record[i].getPubRate() << ", MP = " << record[i].getMinPlayers() << ", MT = " << record[i].getMinPlaytime() << "]";
		std::cout << std::endl;
	}
}
void Executive::option2()//list all games from year
{
	std::cout << "Enter a year to see which games were made that year:";
	int year = 0;
	std::cin >> year;
	int numGamesYear = 0;
		for(int i=0; i < total; i++)
		{
			if(year = record[i].getYear())
			{
			std::cout << record[i].getBoardGame() << " ";
			std::cout << "(" << record[i].getYear() << ")" << "[" << "GR = " << record[i].getGibRate() << ",PR = " << record[i].getPubRate() << ", MP = " << record[i].getMinPlayers() << ", MT = " << record[i].getMinPlaytime() << "]";
			std::cout << std::endl;
			numGamesYear++;
			}
		}
	if(numGamesYear == 0)
	{
		std::cout << "No games found. :(";
		std::cout << std::endl;
	}

}
void Executive::option3()//lists all games within ranking range
{
	double lowerRange = 0.0;
	double upperRange= 0.0;
	int numRankRange=0;
	std::cout << "Enter the lower rating range and higher rating range, respectively:";
	std::cin >> lowerRange >> upperRange;
	for(int i=0; i < total; i++)
	{
		if(record[i].getGibRate() > lowerRange && record[i].getGibRate() < upperRange)
		{
			std::cout << record[i].getBoardGame() << " ";
			std::cout << "(" << record[i].getYear() << ")" << "[" << "GR = " << record[i].getGibRate() << ",PR = " << record[i].getPubRate() << ", MP = " << record[i].getMinPlayers() << ", MT = " << record[i].getMinPlaytime() << "]";
			std::cout << std::endl;
			numRankRange++;
		}
	}
	
	if(numRankRange == 0)
	{
		std::cout << "Please enter valid input";
	}
}
void Executive::option4()//lists all games within a user given separation rating
{
	double diff = 0.0;
	std::cout<< "Enter a separation range between Dr.Gibbon's rating and the public's rating:";
	std::cin >> diff;
	for(int i=0; i < total; i++)
	{
		if(abs(record[i].getGibRate() - record[i].getPubRate() <= diff))
		{
			std::cout << record[i].getBoardGame() << " ";
			std::cout << "(" << record[i].getYear() << ")" << "[" << "GR = " << record[i].getGibRate() << ",PR = " << record[i].getPubRate() << ", MP = " << record[i].getMinPlayers() << ", MT = " << record[i].getMinPlaytime() << "]";
			std::cout << std::endl;
		}
		else
		{
			std::cout << "There are no games that have a rating differing by:" << diff;
		}
	}
}
void Executive::option5()//lists all games that have a low 
{
	double timeSpent = 0.0;
	std::cout << "Enter amount of time you wish to dedicate your life to a board game:";
	std::cin >> timeSpent;
	int numGamesIn = 0;
	for(int i = 0; i < total; i++)
	{
		if(record[i].getMinPlaytime() >= timeSpent)
		{
			std::cout << record[i].getBoardGame() << " ";
			std::cout << "(" << record[i].getYear() << ")" << "[" << "GR = " << record[i].getGibRate() << ",PR = " << record[i].getPubRate() << ", MP = " << record[i].getMinPlayers() << ", MT = " << record[i].getMinPlaytime() << "]";
			std::cout << std::endl;
			numGamesIn++;
		}
	}
	if(numGamesIn == 0)
	{
		std::cout << "Sorry, no games fall under those specifications.";
	}
	std::cout << std::endl;
}

void Executive::execute(){
	printOptions();
      // do{		
			std::cout<<"\nEnter an option(1-6):";
			int choice;
			std::cin >> choice;
				if(choice == 1){
					option1();
				}
				else if(choice == 2){
					option2();
				}
				else if(choice == 3){
					option3();
				}
				else if(choice == 4){
					option4();
				}
				else if(choice == 5){
					option5();
				}
				else if(choice == 6){
					return;
				}
		//}while(choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice !=5);
}
	
					
						
						
						
				

		
	