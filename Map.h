#pragma once

#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4

class Hero;

class Map
{
public:
	Map();
	~Map();
	void setUp(Hero *,char [][30], int, int);
	void showMap();
	void moveHero(int);
	void showRoom(int);
	
private:
	Hero *mHero;
	char mMap[30][30];
	char mMap_aux[30][30];
	int mN;
	int mM;
};

