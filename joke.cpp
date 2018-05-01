#include"joke.h"
using namespace std;
void joke()
	{
		char done;
		srand(time(NULL));
		do{
		cout <<"\033[1J";
                cout<<"\033[1;1H";
                int num = rand() % 10 + 1;
                if(num == 1) {
                        cout << "A guy shows up late for work. The boss yells, ‘You should’ve been here at 8.30!’" << endl;
                        cout << "He replies. ‘Why? What happened at 8.30?’" << endl <<endl;
                }
                if(num == 2) {
                        cout << "Boy: *calls 911* Hello? I need your help!" << endl;
                        cout << "911: Alright, What is it?" << endl;
                        cout << "Boy: Two girls are fighting over me!" << endl;
                        cout << "911: So what's your emergency?" << endl;
                        cout << "Boy: The ugly one is winning." << endl <<endl;
                }
                if(num == 3) {
                        cout << "A mother asks her son, 'Anton, do you think I'm a bad mother?'" << endl;
                        cout << "The son replies, 'My name is Paul.'" << endl <<endl;
                }
		if(num == 4)
                        cout << "Did anyone notice that the '&' symbol looks like a dog dragging his butt across the floor?" << endl << 			endl;
                if(num == 5)
                        cout << "If I ever go missing, you should put my picture on beer rather than milk bottles."
                                <<" This way, my friends will find me faster." << endl <<endl;
                if(num == 6)
                        cout << "I was going to start a Procrastinators Club. But then I realized I’d have to reject"
                                <<" anyone who actually turned up at the meeting so I decided to put it off again." << endl <<endl;
                if(num == 7)
                        cout << "My battery had an alkaline problem, so it went to AA meetings" << endl <<endl;
                if(num == 8)
                        cout << "Herb gardeners who work extra get thyme and a half." << endl <<endl;
                if(num == 9) {
                        cout << "I just wrote a song about tortillas." << endl;
                        cout << "...actually, it's more of a rap." << endl <<endl;
                }
		 if(num == 10) {
                        cout << "What's the worst thing about ancient orators?" << endl;
                        cout << "They tend to Babylon." << endl <<endl;
                }
                
                cout <<"Done laughing? Return?(Y/N)";
                cin >>done;
        }while(done=='N'||done=='n');        	
}	
