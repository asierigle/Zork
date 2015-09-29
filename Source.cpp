#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;
/*struct Map{

};*/

struct Room
{
	char* intro = "WELCOME TO MY AWESOME ZORK, MY LITTLE FRIENDS!!\n";
	char* name = "You are at the ";
	char* description = "You are trapped inside this beautiful red room in which you only can see a\n\
						lighter...\n";
	char* north = NULL;
	char* east = NULL;
	char* south = NULL;
	char* west = NULL;
	char* lighter = "You got the lighter!\n";

};


int main(int argc, char* argv){
	bool end = false;
	Room kitchen;
	Room street;
	int x = 2, y = 2;
	int i = 0;

	char* map[5][5] =
	{ "Street", "Street", "Scary Forest", "Street", "Street",
	"Street", "Street", "Street", "Street", "Street",
	"Street", "Street", "Awesomekitchen", "Street", "Street",
	"Street", "Street", "Street", "Street", "Street",
	"Street", "Street", "Street", "Street", "Street"
	};
	cout << kitchen.intro;
	cout << kitchen.name << map[x][y] << endl;
	cout << kitchen.description;
	cout << "What are you going to do next?\n";



	while (!end){
		string order;
		getline(cin, order);

		if (order == "quit"){
			cout << "Okey byee!\n";
			end = true;
		}
		else if (order == "pick the lighter" && i == 0){
			cout << kitchen.lighter;
			i++;
		}
		else if (order == "info"){
			cout << kitchen.name << map[x][y] << endl << kitchen.description;
		}
		else if (order == "go north"){
			--x;
			cout << street.name << map[x][y] << endl;
		}
		else if (order == "why?"){
			cout << "Because I said so!\n";
		}
		else{
			cout << "You can't do that...\n";

		}
	}
	getchar();

}