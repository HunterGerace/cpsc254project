#include <iostream>
#include <string>
#include <ctime>
#include "AI.h"
using namespace std;
int main() {
	
	AI bot;
	bool exit=false;
	string name;
	string command;
	//start the program, create the object
	cout << "Greetings, user! My name is DEATHBOT, and I will be your personal bot!" << endl;
	//greet user, input text
	while(exit != true) {
		cout << "Please type a command:" << endl;
		cin >> command;
		cout << endl;
		if(command=="EXIT")
			exit=true;
		else
		bot.response(command);
	}
	//bot responds
}
