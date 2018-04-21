#include<iostream>
#include"AI.h"
#include"joke.h"
#include"calculator.h"
using namespace std;

void AI::response(string command) {
        if(command.find("time") != string::npos || command.find("date") != string::npos){
                time_t clock=time(0);
                char* dt =ctime(&clock);
                cout << "The current date and time is: " <<dt << endl;
     	 }
	else if( command.find("joke") != string::npos || command.find("funny") != string::npos || 
		command.find("hilarious") != string::npos || command.find("laugh") != string::npos)
		{
			joke();
 		}
	else if(command.find("math") != string::npos || command.find("calculate") != string::npos ||
         command.find("calculation") != string::npos || command.find("calculator") != string::npos)
		{
			calculator();
		}
}

