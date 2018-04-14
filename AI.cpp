#include "AI.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

time_t clock;

void AI::response(string command) {
	if(command.find("time") != string::npos || command.find("date") != string::npos) {
		//cout << "Today is: " << endl;
		cout << "The current time is: " time(&clock) << endl;
	}
	if(command.find("math") != string::npos || command.find("calculate") != string::npos command.find("calculation") != string::npos || command.find("calculator") != string::npos) {
		int sum = 0;
		string calc;
		while(getline(cin, calc, '=') {
			cout << "Please enter the equation which you wish you calculate (ex. '2 + 2 = '): " << endl;
			int num = calcInt(calc);
			int op = calcOper(calc;
			sum = calculate (num, sum, op);
		}
		cout << "The equation calculates to: " << sum << endl;
	}
	if(command.find("joke") != string::npos || command.find("funny") != string::npos command.find("hilarious") != string::npos || command.find("laugh") != string::npos) {
		srand(time(NULL));
		int num = rand() % 10 + 1;
		if(num == 1) {
			cout << "A guy shows up late for work. The boss yells, ‘You should’ve been here at 8.30!’" << endl;
			cout << "He replies. ‘Why? What happened at 8.30?’" << endl;
		}
		if(num == 2) {
			cout << "Boy: *calls 911* Hello? I need your help!" << endl;
			cout << "911: Alright, What is it?" << endl;
			cout << "Boy: Two girls are fighting over me!" << endl;
			cout << "911: So what's your emergency?" << endl;
			cout << "Boy: The ugly one is winning." << endl;
		}
		if(num == 3) {
			cout << "A mother asks her son, 'Anton, do you think I'm a bad mother?'" << endl;
			cout << "The son replies, 'My name is Paul.'" << endl;
		}
		if(num == 4)
			cout << "Did anyone notice that the '&' symbol looks like a dog dragging his butt across the floor?" << endl;
		if(num == 5)
			cout << "If I ever go missing, you should put my picture on beer rather than milk bottles. This way, my friends will find me faster." << endl;
		if(num == 6)
			cout << "I was going to start a Procrastinators Club. But then I realized I’d have to reject anyone who actually turned up at the meeting so I decided to put it off again." << endl;
		if(num == 7)
			cout << "My battery had an alkaline problem, so it went to AA meetings" << endl;
		if(num == 8)
			cout << "Herb gardeners who work extra get thyme and a half." << endl;
		if(num == 9) {
			cout << "I just wrote a song about tortillas." << endl;
			cout << "...actually, it's more of a rap." << endl;
		}
		if(num == 10) {
			cout << "What's the worst thing about ancient orators?" << endl;
			cout << "They tend to Babylon." << endl;
		}
	}
	//tic tac toe
	//joke
	//song
}

int calcInt(string ex) {
	char ch;
	int x;
	while(ex.get(ch)) {
		if(ch>='0' && ch<='9') {
			cin.putback(ch);
			cin>>x;
			break;
		}
	return x;
}

int calcOper(string ex)
{
	char ch;
	int x;
	while(ex.get(ch)) {
		if(ch == '+'){cin.putback(ch); x=1; break;}
		else if(ch == '-'){cin.putback(ch); x=2; break;}
		else if(ch == '*'){cin.putback(ch); x=3; break;}
		else if(ch == '/'){cin.putback(ch); x=4; break;}
		else {x=0; break;}
	}
	return x;
}

int calculate(int num,int sum, int op) {
	switch(op) {
		case 1: {sum+=num; break;}
		case 2: {sum-=num; break;}
		case 3: {sum*=num; break;}
		case 4: {sum/=num; break;}
		default: sum+=num;
	}
}