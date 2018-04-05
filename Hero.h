#pragma once
#include <string>
#include <iostream>

class Hero
{
public:
	Hero();
	~Hero();
	void setUp(std::string,int,int,char,int,int);
	int getAtk();
	int getHp();
	void healHp(int);
	void incrementMaxAtk(int);
	void incrementMaxHp(int);
	void showStats();
	bool takeDamage(int);
	char getSymbol();
	void setHeroCoordY(int);
	void setHeroCoordX(int);
	int Hero::getHeroCoordY();
	int Hero::getHeroCoordX();

private:
	int mCurrentHp;
	int mBaseHp;
	int mBaseAtk;
	int mCurrentAtk;
	int mMaxHp;
	int mHeroCoordY;
	int mHeroCoordX;
	std::string mName;
	char mSymbol;
};

