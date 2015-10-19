#include <iostream>
#include <string>
#include "Objects.h"
#ifndef __ROOM_H__
#define __ROOM_H__

class Room{
public:
	char* name;
	char* description;
	char* exits;
	Objects obj1;
	Objects obj2;
private:

};
#endif