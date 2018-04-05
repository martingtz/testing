#include "Command.h"
#include <regex>
#include <iostream>
#include  "Map.h"

#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4


Command::Command()
{
}


Command::~Command()
{
}


void Command::setUp(Map *map)
{
	mMap = map;
}

void Command::execute(std::string command)
{
	std::regex c_format( "[MLBD][ovemntokalcis]+:[UDLRYNAPF][powneftighsackl]+");
	std::regex c_help("[H][elp]+");

	if (std::regex_match(command, c_format))
	{
		int p = command.find(':');
		std::string command1 = command.substr(0,p);
		std::string command2 = command.substr(p + 1, command1.length());

		if (!command1.compare("Movement"))
		{
			if (!command2.compare("Up"))
			{
				mMap->moveHero(UP);
			}
			if (!command2.compare("Down"))
			{
				mMap->moveHero(DOWN);
			}
			if (!command2.compare("Left"))
			{
				mMap->moveHero(LEFT);
			}
			if (!command2.compare("Right"))
			{
				mMap->moveHero(RIGHT);
			}
		}
	
	}



	if (std::regex_match(command, c_help)){
		if (!command.compare("Help"))
		{
			std::cout << "Help\n";
		}
	}
}