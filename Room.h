#include <iostream>
#include <string>
#include "Objects.h"
#ifndef __ROOM_H__
#define __ROOM_H__

class Room{
public:
	char* name = "You are at the ";
	char* description;
	Objects obj1;
	Objects obj2;

	/*bool Exits(){
		cout << north << east << west << south;
		return true;
	}*/
private:

};
#endif