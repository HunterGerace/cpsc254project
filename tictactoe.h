#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;
class tic
{
private:
	bool done = false,human=true;
	char board[10] = {'0','1','2','3','4','5','6','7','8','9'};
	char answerC, icon1, icon2;
	int counter=1,current,score1 = 0,score2 = 0,answerI = 0;
	string p1,p2,winner="No";
public:
	tic();
	int comp();
	void askmove();
	void checkwin();
	void menu();
	void play();
	void reset();
	void showboard();
};
