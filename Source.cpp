#include <iostream>
#include <string>
#include "Objects.h"
#include "Room.h"
#include "Player.h"
using namespace std;
Room map[5][5];
int x, y;




void Init(){
	
	/*{ "Street1", "Street2", "Scary Forest", "Street4", "Street5",
	"Street6", "Street7", "Front door", "Street8", "Street9",
	"Street10", "Bus stop", "Awesomekitchen", "Parking", "Street11",
	"Street12", "Street13", "Street14", "Street15", "Street16",
	"Street17", "Street18", "Street19", "Street20", "Street21"
	};*/
	map[2][2].name = "You are at the Awesomekitchen\n";
	map[2][1].name = "You are at the front door\n";
	map[2][0].name = "You are at the Scary Forest! you shouldn't stay here a lot of time...\n";
	map[2][2].description = "You are trapped inside this beautiful red room in which you only can see a lantern...\n";
	map[2][1].description = "There is a scary forest over there...\n";
	map[2][2].exits = "There's a door at the north.\n There are walls at the east and west.\n There's a window at the south.\n";
	map[2][2].obj1.name = "Lighter\n";
	map[2][2].obj2.name = "Window\n";
	map[2][2].obj1.description = "Has low battery\n";
	map[2][2].obj2.description = "You can see an enormous green field throught the window\n";
	map[2][2].obj1.pick = "Good you have the lantern!\n";
	map[2][2].obj1.drop = "You drop that poor lantern\n";
	
}


int main(int argc, char* argv){

	bool end = false;
	x = y = 2;
	Player player(50, 0);
	player.obj1.name = "You have no objects\n";

	Init();
	char* intro = "WELCOME TO MY AWESOME ZORK, MY LITTLE FRIENDS!!\n";

	cout << intro;
	cout << map[x][y].name << endl;
	cout << map[x][y].description;
	cout << "What are you going to do next?\n";



	while (!end){
		string order;
		getline(cin, order);

		if (order == "pick" && map[x][y].obj1.name != NULL){
			cout << map[x][y].obj1.pick;
			player.obj1.name = map[x][y].obj1.name;
			player.obj1.description = map[x][y].obj1.description;
			player.obj1.pick = map[x][y].obj1.pick;
			player.obj1.drop = map[x][y].obj1.drop;
			map[x][y].obj1.name = map[x][y].obj1.description = map[x][y].obj1.pick = map[x][y].obj1.drop = NULL;
		}
		else if (order == "drop" && player.obj1.name != NULL){
			cout << player.obj1.drop;
			map[x][y].obj1.name = player.obj1.name;
			map[x][y].obj1.description = player.obj1.description;
			map[x][y].obj1.pick = player.obj1.pick;
			map[x][y].obj1.drop = player.obj1.drop;
			player.obj1.name = "You have no objects\n";
			player.obj1.description = player.obj1.pick = player.obj1.drop = NULL;
		}
		else if (order == "inventory"){
			cout << player.obj1.name;
		}
		else if (order == "look window" && x == 2 && y == 2){
			cout << map[x][y].obj2.description;
		}
		else if (order == "info"){
			cout << map[x][y].name << map[x][y].description << map[x][y].exits;
		}
		else if (order == "go north" || order == "north" && x > 0){
			--y;
			cout << map[x][y].name;
		}
		else if (order == "go south" || order == "south" && x < 4){
			++y;
			cout << map[x][y].name;
		}
		else if (order == "go east" || order == "east" && x != 2 && y < 4){
			++x;
			cout << map[x][y].name;
		}
		else if (order == "go west" || order == "west" && x != 2 && y > 0){
			--x;
			cout << map[x][y].name;
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