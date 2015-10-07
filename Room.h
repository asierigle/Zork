#include <iostream>
#include <string.h>
#include "Objects.h"

#ifndef __ROOM_H__
#define __ROOM_H__
class Room{
public:
	char* name = "You are at the ";
	char* description;
	char* north = map[x][--y].name;
	char* east = map[++x][y].name;
	char* south = map[x][++y].name;
	char* west = map[--x][y].name;
	Objects obj1;
	Objects Obj2;
	bool Exits(){
		cout << north << east << west << south;
		return true;
	}
private:

};
Room map[5][5];
#endif