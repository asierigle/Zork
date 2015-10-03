#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

class Room
{
public:
	char* intro = "WELCOME TO MY AWESOME ZORK, MY LITTLE FRIENDS!!\n";
	char* name = "You are at the ";
	char* north = NULL;
	char* east = NULL;
	char* south = NULL;
	char* west = NULL;
private:

};

class Kitchen : public Room
{
public:
	char* description = "You are trapped inside this beautiful red room in which you only can see a lighter...\n";
	char* north = "There are some stairs on the north...\n";
	char* east = "You can see a wall at the east.\n";
	char* south = "You can see a small window at the south.\n";
	char* west = "You can see a wall at the west.\n";
	char* window = "You can see an enormous green field throught the window\n";
	char* lighter = "You got the lighter!\n";
	bool Exits(){
		cout << north << east << west << south;
		return true;
	}
private:

};


int main(int argc, char* argv){
	bool end = false;
	Kitchen kitchen;
	Room street;
	int x = 2, y = 2;
	int i = 0;

	char* map[5][5] =
	{ "Street1", "Street2", "Scary Forest", "Street4", "Street5",
	"Street6", "Street7", "Front door", "Street8", "Street9",
	"Street10", "Bus stop", "Awesomekitchen", "Parking", "Street11",
	"Street12", "Street13", "Street14", "Street15", "Street16",
	"Street17", "Street18", "Street19", "Street20", "Street21"
	};
	cout << kitchen.intro;
	cout << kitchen.name << map[x][y] << endl;
	cout << kitchen.description;
	cout << "What are you going to do next?\n";



	while (!end){
		string order;
		getline(cin, order);

		if (order == "pick the lighter" && i == 0 && x == 2 && y == 2){
			cout << kitchen.lighter;
			i++;
		}
		else if (order == "look window" && x == 2 && y == 2){
			cout << kitchen.window;
		}
		else if (order == "info" && x == 2 && y == 2){
			cout << kitchen.name << map[x][y] << endl << kitchen.description;
			kitchen.Exits();
		}
		else if (order == "go north" && x > 0){
			--x;
			cout << street.name << map[x][y] << endl;
		}
		else if (order == "go south" && x < 4){
			++x;
			cout << street.name << map[x][y] << endl;
		}
		else if (order == "go east" && x != 2 && y < 4){
			++y;
			cout << street.name << map[x][y] << endl;
		}
		else if (order == "go west" && x != 2 && y > 0){
			--y;
			cout << street.name << map[x][y] << endl;
		}
		else if (order == "why?"){
			cout << "Because I said so!\n";
		}
		else if (order == "quit"){
			cout << "Okey byee!\n";
			end = true;
		}
		else{
			cout << "You can't do that...\n";
		}
	}
	getchar();
}