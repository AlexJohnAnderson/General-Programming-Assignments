#include "BoardGames.h"

//sets
void BoardGames::setBoardGame(std::string BG)
{
	boardGame = BG;
}
void BoardGames::setGibRate(double GR)
{
	gibRate = GR;
}
void BoardGames::setPubRate(double PR)
{
	pubRate = PR;
}
void BoardGames::setYear(int YR)
{
	year = YR;
}
void BoardGames::setMinPlayers(int MP)
{
	minPlayers = MP;
}
void BoardGames::setMinPlaytime(int MT)
{
	minPlaytime = MT;
}

//gets
std::string BoardGames::getBoardGame()
{
	return boardGame;
}

double BoardGames::getGibRate()
{
	return gibRate;
}

double BoardGames::getPubRate()
{
	return pubRate;
}

int BoardGames::getYear()
{
	return year;
}

int BoardGames::getMinPlayers()
{
	return minPlayers;
}

int BoardGames::getMinPlaytime()
{
	return minPlaytime;
}

