#pragma once
#include <string>

class Hero;
class Map;
class Command;


class Game
{
public:
	Game();
	void run(std::string, int, int, char [][30],int,int);
	~Game();

private:
	Hero * mHero;
	Map *mMap;
	Command *mCommad;
	std::string mName;
	void setUp(std::string, int, int, char[][30], int, int);
	void gameLoop();
};



