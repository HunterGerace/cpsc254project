#include <iostream>
#include <string>
#include <ctime>
#include "AI.h"
using namespace std;
int main() {
	
	AI bot;
	bool exit=false;
	string name,command;
	//start the program, create the object
	cout << "Greetings, user! My name is DEATHBOT, and I will be your personal bot!" << endl;
	//greet user, input text
	while(exit != true) {
		cout <<"\033[1J";
		cout<<"\033[1;1H";
		cout << "Please type a command:" << endl;
		cin >> command;
		cout << endl;
		if(command=="EXIT"||command=="Exit"||command=="exit")
			exit=true;
		else
		bot.response(command);
	}
	//bot responds
}
