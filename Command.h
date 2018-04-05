#pragma once
#include <string>

class Map;

class Command
{
public:
	Command();
	~Command();
	void setUp(Map *map);
	void execute(std::string command);
private:
	Map *mMap;
};

