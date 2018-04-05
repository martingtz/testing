#include "Map.h"
#include "Hero.h"
#include <iostream>
#define HIDE 'X'
#define START 'S'



Map::Map()
{
}


Map::~Map()
{
}

void Map::setUp(Hero *hero, char matrix[][30], int n,int m)
{
	mHero = hero;
	mM = m;
	mN = n;

	for (int f = 0; f < n; f++)
	{
		for (int c = 0; c < m; c++)
		{
			mMap[f][c] = matrix[f][c];
			mMap_aux[f][c] = HIDE;
			if (mMap[f][c] == START)
			{
				mHero->setHeroCoordY(f);
				mHero->setHeroCoordX(c);
				mMap_aux[f][c] = START;
			}
		}
	}
	
}



void Map::showMap()
{
	for (int f = 0; f < mN; f++)
	{
		for (int c = 0; c < mM; c++)
		{
			std::cout << mMap_aux[f][c] << "  ";
		}
		std::cout << "\n\n";
	}
}

void Map::moveHero(int direction)
{
	int f = mHero->getHeroCoordY();
	int c = mHero->getHeroCoordX();
	mMap_aux[f][c] = mMap[f][c];
	switch (direction)
	{
	case UP:
		f -= 1;
		break;
	case DOWN:
		f += 1;
		break;
	case LEFT:
		c -= 1;
		break;
	case RIGHT:
		c += 1;
		break;
	default:
		break;
	}

	mMap_aux[f][c] = mMap[f][c];
	mHero->setHeroCoordY(f);
	mHero->setHeroCoordY(c);
}


void Map::showRoom(int direction)
{
	int f = mHero->getHeroCoordY();
	int c = mHero->getHeroCoordX();

	switch (direction)
	{
	case UP:
		f -= 1;
		break;
	case DOWN:
		f += 1;
		break;
	case LEFT:
		c -= 1;
		break;
	case RIGHT:
		c += 1;
		break;
	default:
		break;
	}
	mMap_aux[f][c] = mMap[f][c];
}