#include "Hero.h"


Hero::Hero()
{
}


Hero::~Hero()
{
}


// Obtener el atk actual del heroe
int Hero::getAtk()
{
	return mCurrentAtk;
}
// Obtener el hp actual del heroe
int Hero::getHp()
{
	return mCurrentHp;
}
// Sanar Heroe
void Hero::healHp(int amount)
{
	if (mCurrentHp < mMaxHp)
	{
		mCurrentHp += amount;
		if (mCurrentHp > mMaxHp)
		{
			mCurrentHp = mMaxHp;
		}
	}		
}
// Incrementar el atk del heroe
void Hero::incrementMaxAtk(int amount)
{
	mCurrentAtk = mBaseAtk + amount;
}
// Incrementar la capacidad de Hp del heroe
void Hero::incrementMaxHp(int amount)
{
	mMaxHp = mBaseHp + amount;
}

// Mostrar estado del heroe
void Hero::showStats()
{
	std::cout << "Name: " << mName << std::endl;
	std::cout << "HP: " << mCurrentHp << "/" << mMaxHp << "  Atk: " << mCurrentAtk << std::endl;
}
// Dañar el hp del heroe si llega a 0 o mener devolver true (muerto)
bool Hero::takeDamage(int damage)
{
	mCurrentHp -= damage;
	if (mCurrentHp <= 0)
		return true;
	return false;
}
// Setup del heroe
void Hero::setUp(std::string name, int hp, int atk, char symbol, int x, int y)
{
	mName = name;
	mBaseHp = hp;
	mCurrentHp = hp;
	mMaxHp = hp;
	mBaseAtk = atk;
	mCurrentAtk = atk;
	mSymbol = symbol;
	mHeroCoordY = y;
	mHeroCoordX = x;
}

void Hero::setHeroCoordY(int f)
{
	mHeroCoordY = f;
}

void Hero::setHeroCoordX(int c)
{
	mHeroCoordX = c;
}

int Hero::getHeroCoordY()
{
	return mHeroCoordY;
}

int Hero::getHeroCoordX()
{
	return mHeroCoordX;
}

char Hero::getSymbol()
{
	return mSymbol;
}



