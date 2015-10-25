#include <iostream>
#include <string>
#include "Objects.h"
#ifndef __PLAYER_H__
#define __PLAYER_H__

class Player{
public:
	char* name = "Asier";

	Player(int health1, int armor1);
	int health;
	int armor;
	Objects obj1;
	Objects obj2;
private:

};
#endif