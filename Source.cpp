#include <iostream>
#include <string>
#include "Objects.h"
#include "Room.h"
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

	map[2][2].name = "You are at the Awesomekitchen";
	map[2][1].name = "You are at the front door";
	map[2][2].description = "You are trapped inside this beautiful red room in which you only can see a lighter...\n";
	map[2][2].obj1.name = "Lighter\n";
	map[2][2].obj1.description = "Has low battery\n";
	map[2][2].obj1.pick = "Good you have the lighter!\n";
	map[2][2].obj2.name = "Window\n";
	map[2][2].obj2.description = "You can see an enormous green field throught the window\n";
}


int main(int argc, char* argv){

	bool end = false;
	int i = 0;
	x = y = 2;
	

	Init();
	char* intro = "WELCOME TO MY AWESOME ZORK, MY LITTLE FRIENDS!!\n";

	cout << intro;
	cout << map[x][y].name << endl;
	cout << map[x][y].description;
	cout << "What are you going to do next?\n";



	while (!end){
		string order;
		getline(cin, order);

		if (order == "pick the lighter" && i == 0 && x == 2 && y == 2){
			cout << map[x][y].obj1.pick;
			i++;
		}
		else if (order == "look window" && x == 2 && y == 2){
			cout << map[x][y].obj2.description;
		}
		else if (order == "info" && x == 2 && y == 2){
			cout << map[x][y].name << endl << map[x][y].description;
			//map[x][y].Exits();
		}
		else if (order == "go north" && x > 0){
			--y;
			cout << map[x][y].name << endl;
		}
		else if (order == "go south" && x < 4){
			++y;
			cout << map[x][y].name << endl;
		}
		else if (order == "go east" && x != 2 && y < 4){
			++x;
			cout << map[x][y].name  << endl;
		}
		else if (order == "go west" && x != 2 && y > 0){
			--x;
			cout << map[x][y].name  << endl;
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