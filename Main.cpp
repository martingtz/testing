#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include "Game.h"


#define MAX 30

bool validateName(std::string);

int main(int argc, char **argv)
{
	std::string name;
	char matrix[MAX][MAX];
	int hp;
	int atk;
	int n;
	int m;

	std::ifstream reader;
	for (int i = 1; i < argc; i++)
	{
		reader.open(argv[i]);
		reader >> hp;
		reader >> atk;
		reader >> n;
		reader >> m;



		for (int f = 0; f < n; f++)
		{
			for (int c = 0; c < m; c++)
			{
				reader >> matrix[f][c];
			}
		}


		while (true)
		{
			std::cout << "Enter your name: ";
			getline(std::cin, name);
			if (validateName(name))
				break;
			else
				std::cout << "Name is invalid :(. Only letters are allowed.\nPlease try again.\n";
		}

		//***** game starts ***
		std::cout << "\n\n";

		Game *game = new Game();
		game->run(name, hp, atk, matrix, n, m);

	}
}


bool validateName(std::string name)
{
	int index = 0;
	
	while (name[index]!=0)
	{
		if (name[index] != 32 && (tolower(name[index]) < 97 || tolower(name[index] > 122)))
		{
			return false;
		}
		if (index++ >= 20)
			return false;
	}
	return true;
}
