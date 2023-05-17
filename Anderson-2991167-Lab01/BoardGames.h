#ifndef BOARD_GAMES_H
#define BOARD_GAMES_H
#include <string>
#include <iostream>

class BoardGames{
	
	private:
	
		std::string boardGame;
		double gibRate;
		double pubRate;
		int year;
		int minPlayers;
		int minPlaytime;
	
	public:
	
		void setBoardGame(std::string BG);
		void setGibRate(double GR);
		void setPubRate(double PR);
		void setYear(int YR);
		void setMinPlayers(int MP);
		void setMinPlaytime(int MT);
	
		std::string getBoardGame();
		double getGibRate();
		double getPubRate();
		int getYear();
		int getMinPlayers();
		int getMinPlaytime();
	
};
#endif