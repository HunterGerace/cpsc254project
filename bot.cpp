#include <iostream>
#include "AI.h"

using namespace std;

int main() {
	
	intelligence bot;
	bool exit;
	string name;
	string command;
	//start the program, create the object
	
	cout << "Greetings, user! My name is _______, and I will be your personal bot!" << endl;
	//greet user, input text
	while(exit != true) {
		cout << "Please type a command:" << endl;
		cin >> command >> endl;
		bot.response(command);
	}
	
	//bot responds
}