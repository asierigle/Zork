#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

struct Room
{
	char* intro = "WELCOME TO MY AWESOME ZORK, MY LITTLE FRIENDS!!\n";
	char* name = "You are at the Awesomekitchen\n";
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
	int i = 0;
	cout << kitchen.intro;
	cout << kitchen.description;


	while (!end){
		cout << "What are you going to do next?\n";
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
			cout << kitchen.name << kitchen.description;
		}
		else
			cout << "You can't do that...\n";

	}
	getchar();

}