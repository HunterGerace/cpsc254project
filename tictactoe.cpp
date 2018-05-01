#include "tictactoe.h"
using namespace std;
tic::tic()
{
	cout<<"\033[2J";
	menu();
}
//return a random array element that does not have X or O in it
int tic::comp()
{
	srand(time(NULL));
	answerI= rand() % 9 + 1;
	while(board[answerI]=='X' || board[answerI]=='O')
	{
		answerI= rand() % 9 + 1;
	}
	return answerI;
}
//ask the user what place to put X or O if playing against computer
//use comp() to find a place to put it
void tic::askmove()
{
	if(human==true)
	{
		if(current==1)
		{
			do
			{
				cout<<p1 <<" choose a position to mark with "<<icon1;
				cout<<": ";
				cin>>answerI;
				if(board[answerI]=='X'||board[answerI]=='O')
				{
					showboard();
					cout<<" INVALID OPTION "<<endl;
				}
			}while(board[answerI]=='X'||board[answerI]=='O');
			current=2;
			board[answerI]=icon1;
		}
		else
		{
			do
			{
				cout<<p2 <<" choose a position to mark with "<<icon2;
				cout<<": ";
				cin>>answerI;
				if(board[answerI]=='X'||board[answerI]=='O')
				{
					showboard();
					cout<<" INVALID OPTION "<<endl;
				}
			}while(board[answerI]=='X'||board[answerI]=='O');
			current=1;
			board[answerI]=icon2;
		}
	}
	else
	{
		if(current==1)
		{
			do
			{
				cout<<p1 <<" choose a position to mark with "<<icon1;
				cout<<": ";
				cin>>answerI;
				if(board[answerI]=='X'||board[answerI]=='O')
				{
					showboard();
					cout<<" INVALID OPTION "<<endl;
				}
			}while(board[answerI]=='X'||board[answerI]=='O');
			current=2;
			board[answerI]=icon1;
		}
		else
		{
			current=1;
			board[comp()]=icon2;
		}
	}
}
//check every possible way to win to see what player won 
void tic::checkwin()
{	
	if((board[1]=='X'&& board[2]=='X' && board[3]=='X')||
	(board[1]=='O'&& board[2]=='O' && board[3]=='O'))
	{
		if(board[1]=='X' && icon1=='X')
		{
			winner=p1;
			score1++;
		}
		else if(board[1]=='O' && icon1=='O')
		{
			winner=p1;
			score1++;
		}
		else
		{
			winner=p2;
			score2++;
		}
	}
	else if((board[4]=='X'&& board[5]=='X' && board[6]=='X')||
	(board[4]=='O'&& board[5]=='O' && board[6]=='O'))
	{
		if(board[4]=='X' && icon1=='X')
		{
			winner=p1;
			score1++;
		}
		else if(board[4]=='O' && icon1=='O')
		{
			winner=p1;
			score1++;
		}
		else
		{
			winner=p2;
			score2++;
		}
	}
	else if((board[7]=='X'&& board[8]=='X' && board[9]=='X')||
	(board[7]=='O'&& board[8]=='O' && board[9]=='O'))
	{
		if(board[7]=='X' && icon1=='X')
		{
			winner=p1;
			score1++;
		}
		else if(board[7]=='O' && icon1=='O')
		{
			winner=p1;
			score1++;
		}
		else
		{
			winner=p2;
			score2++;
		}
	}
	else if((board[1]=='X'&& board[4]=='X' && board[7]=='X')||
	(board[1]=='O'&& board[4]=='O' && board[7]=='O'))
	{
		if(board[1]=='X' && icon1=='X')
		{
			winner=p1;
			score1++;
		}
		else if(board[1]=='O' && icon1=='O')
		{
			winner=p1;
			score1++;
		}
		else
		{
			winner=p2;
			score2++;
		}
	}
	else if((board[2]=='X'&& board[5]=='X' && board[8]=='X')||
	(board[2]=='O'&& board[5]=='O' && board[8]=='O'))
	{
		if(board[2]=='X' && icon1=='X')
		{
			winner=p1;
			score1++;
		}
		else if(board[2]=='O' && icon1=='O')
		{
			winner=p1;
			score1++;
		}
		else
		{
			winner=p2;
			score2++;
		}
	}
	else if((board[3]=='X'&& board[6]=='X' && board[9]=='X')||
	(board[3]=='O'&& board[6]=='O' && board[9]=='O'))
	{
		if(board[3]=='X' && icon1=='X')
		{
			winner=p1;
			score1++;
		}
		else if(board[3]=='O' && icon1=='O')
		{
			winner=p1;
			score1++;
		}
		else
		{
			winner=p2;
			score2++;
		}
	}
	else if((board[1]=='X'&& board[5]=='X' && board[9]=='X')||
	(board[1]=='O'&& board[5]=='O' && board[9]=='O'))
	{
		if(board[1]=='X' && icon1=='X')
		{
			winner=p1;
			score1++;
		}
		else if(board[1]=='O' && icon1=='O')
		{
			winner=p1;
			score1++;
		}
		else
		{
			winner=p2;
			score2++;
		}
	}
	else if((board[3]=='X'&& board[5]=='X' && board[7]=='X')||
	(board[3]=='O'&& board[5]=='O' && board[7]=='O'))
	{
		if(board[3]=='X' && icon1=='X')
		{
			winner=p1;
			score1++;
		}
		else if(board[3]=='O' && icon1=='O')
		{
			winner=p1;
			score1++;
		}
		else
		{
			winner=p2;
			score2++;
		}
	}
}
//main menu that user sees
void tic::menu()
{
	cout<<"\033[1;1H";
	cout<<"              TIC TAC TOE GAME" << endl;
	cout<<"                 Main Menu" << endl;
	cout<<"             1. Player vs Computer" << endl;
	cout<<"             2. Player vs Player" << endl;
	cout<<"             3. EXIT" << endl <<endl;
	cin >> answerC;
	switch(answerC)
	{
		case '1' :
		{
			done = false;
			human=false;
			score1=0;
			score2=0;
			counter=1;
			play();
			break;
		}
		case '2' :
		{
			done = false;
			human=true;
			score1=0;
			score2=0;
			counter=1;
			play();
			break;
		}
		case '3' : 
		{
			return ;
		}
		default:
		{
			menu();
		}
		
	}
}
//main funtion used to start and run a game
void tic::play()
{
	cout<<"Player 1 name?\n";
	cin>> p1;
	if(human==true)
	{
		cout<<"Player 2 name?\n";
		cin>> p2;
	}
	else
	{
		p2="COMPUTER";
	}
	cout<<p1 <<" is going first or second(1 or 2)?\n";
	cin >> current;
	if(current==1)
	{
		icon1='X';
		icon2='O';
	}
	else
	{
		icon2='X';
		icon1='O';
	}
	showboard();
	while(done!=true)
	{
	askmove();
	showboard();
	checkwin();
	if(winner!="No")
	{
		cout<< endl <<"winner is "<<winner <<endl;
		cout<<"Play Again?(Y/N)";
		cin >>answerC;
		if(answerC=='Y')
		{
			reset();
		}
		else
		{
			cout <<endl <<"FINAL SCORE" <<endl;
			cout <<p1 <<" score=" <<score1 <<endl;
			cout <<p2 <<" score=" <<score2 <<endl;
			cout <<"Enter c to continue: ";
			cin >>answerC;
			done=true;
			reset();
		}
	}
	if(counter >= 9)
	{
		cout<< endl <<"DRAW GAME" <<endl;
		cout<<"Play Again?(Y/N)";
		cin >>answerC;
		if(answerC=='Y')
		{
			reset();
		}
		else
		{
			cout <<endl <<"FINAL SCORE" <<endl;
			cout <<p1 <<" score=" <<score1 <<endl;
			cout <<p2 <<" score=" <<score2 <<endl;
			cout <<"Enter c to continue: ";
			cin >>answerC;
			done=true;
			reset();
		}
	}
	counter++;
	}
	cout<<"\033[1J";
	menu();
}
//reset the board to play another game
void tic::reset()
{
	counter=0;
	winner="No";
	board[1]='1';
	board[2]='2';
	board[3]='3';
	board[4]='4';
	board[5]='5';
	board[6]='6';
	board[7]='7';
	board[8]='8';
	board[9]='9';
	if(done==false)
	{
		cout<<p1 <<" is going first or second(1 or 2)?\n";
		cin >> current;
	}
	if(current==1)
	{
		icon1='X';
		icon2='O';
	}
	else
	{
		icon2='X';
		icon1='O';
	}
	showboard();
}
//show the tic tac toe board
void tic::showboard()
{
	cout<<"\033[1J";
	cout<<"\033[1;1H";
	cout<<"SCORE: "<<p1<<" = " <<score1 <<" " <<p2 <<" = " <<score2 <<endl;
	cout<<endl << endl;
	cout<<"               "<<board[1]<<" | "<<board[2]<<" | "<<board[3] << endl;
	cout<<"           ---------------" << endl;
	cout<<"               "<<board[4]<<" | "<<board[5]<<" | "<<board[6] << endl;
	cout<<"           ---------------" << endl;
	cout<<"               "<<board[7]<<" | "<<board[8]<<" | "<<board[9] << endl;
}
