#include <stdio.h>

struct Room
{
	char nord;
	char east;
	char south;
	char west;
	char lighter;

};

int main(int argc, char** argv){
	char* c;
	printf("%s", "WELCOME TO MY AWESOME ZORK, MY LITTLE FRIENDS!!\n\
You are trapped inside this beautiful red room in which you only can see a\n\
lighter...\n\
What are you going to do?\n");

	while (scanf_s("%s", &c) == NULL){

		if (c = "quit"){
			printf("%s", "Byee!\n");
			getchar();
			
		}
		else 
			printf("%s", "I can't understand you...\n");
				
	}
	
}