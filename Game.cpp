#include "Game.h"
#include "Hero.h"
#include "Map.h"
#include "Command.h"

Game::Game()
{
}


Game::~Game()
{
}


void Game::setUp(std::string name, int hp, int atk, char matrix[][30], int n, int m)
{
	//Inicializar Heroe
	mHero = new Hero();
	mHero->setUp(name,hp,atk,'C',0,0);
	//Inicializar Mapa
	mMap = new Map();
	mMap->setUp(mHero,matrix, n, m);
	//Inicializar command manager
	mCommad = new Command();
	mCommad->setUp(mMap);
}


void Game::gameLoop()
{
	std::string command;
	while (true)
	{
		// Mostrar en consola
		mMap->showMap();
		std::cout << "----------------------------------\n";
		mHero->showStats();

		std::cout << "Enter command: ";
		getline(std::cin,command);
		mCommad->execute(command);
	}
}


void Game::run(std::string name, int hp, int atk, char matrix[][30], int n, int m)
{
	setUp(name,hp,atk,matrix,n,m);
	gameLoop();

}