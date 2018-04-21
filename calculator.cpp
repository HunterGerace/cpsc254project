#include"calculator.h"
using namespace std;
void calculator()
{
	string equation;
	string storage;
	vector<char> revise;
	vector<char> com;
	stack<float> cal;
	stack<char> op;
	int  length,counter,answer;
	float storeX,storeY;
	bool first=true;
	cout<<"Enter a equation ending with '=' EX.2*5-4/2=" <<endl;
	cin>>equation;
	length=(equation.size())-1;
	counter=0;
	
	//turn equation into readable form
	//loop through equation 2*(5-4)
	for(int i=0;i<length;i++)
	{
		if(equation[i]<40 || equation[i]>57)
		{
			cout<<"INVALID EQUATION";
			return;
		}
		else if(equation[i]>=48 && equation[i]<=57)
		{
			if(revise.size() != 0)
			{
				if(revise.back()!=' ')
				{
					revise.push_back(' ');
					revise.push_back(equation[i]);
		                        counter++;
				}
				else
				{
					revise.push_back(equation[i]);
		                        counter++;
				}
			}
			else
			{
				revise.push_back(equation[i]);
				counter++;
			}
		}
		else
		{
		//
			switch(equation[i])
			{
				case '(' :{
						if(i==0)
                        		        	op.push('(');
						else
							{
							if(revise.back()==' ')
								op.push('(');
								else
								{
									revise.push_back(' ');
									op.push('(');
								}
							}
						break;
					}
				case ')':{
                       		 	        revise.push_back(' ');
						while(op.top()!='(')
						{
							revise.push_back(op.top());
							op.pop();
							counter++;
						}
						op.pop();
						break;
					}
				case '*':{
						if(op.empty()==true)
						{
                               				revise.push_back(' ');
							op.push('*');
						}
						else if(op.top()=='/')
						{
							while(op.empty()==false)
							{
								if(op.top()=='(')
									break;
                               					revise.push_back(' ');
								revise.push_back(op.top());
								op.pop();
								counter++;
							}
							op.push('*');
						}
						else
						{
			                                revise.push_back(' ');
							op.push('*');
						}
						break;
					}
				case '/':{
						if(op.empty()==true)
						{ 
                               				 revise.push_back(' ');
                               				 op.push('/');
						}
						else if(op.top()=='*')
                               			 {
							while(op.empty()==false)
                               				{
								if(op.top()=='(')
									break;
								revise.push_back(' ');
                               				 	revise.push_back(op.top());
                              				 	op.pop();
                               				 	counter++;
							}
                               				 op.push('/');
                               			 }
                               			 else
                                		{
                               				 revise.push_back(' ');
                               				 op.push('/');
                               			 }
                               			 break;

					}
				case '+':{
						if(op.empty()==true)
						{
                              				revise.push_back(' ');
                        			        op.push('+');
						}
						else if(op.top()=='*' || op.top()=='/' || op.top()=='-')
						{
							while(op.empty()==false)
							{
                                                                if(op.top()=='(')
                                                                        break;
                              					revise.push_back(' ');
								revise.push_back(op.top());
								op.pop();
								counter++;
							}
							op.push('+');
						}
						else
						{
                                			revise.push_back(' ');
							op.push('+');
						}
						break;
					}
		  		case '-':{
						if(op.empty()==true)
						{
                                			revise.push_back(' ');
                                			op.push('-');
						}
                                		else if(op.top()=='*' || op.top()=='/' || op.top()=='+')
                                		{
							while(op.empty()==false)
							{
                                                                if(op.top()=='(')
                                                                        break;
                                				revise.push_back(' ');
                                				revise.push_back(op.top());
                                				op.pop();
                                				counter++;
							}
                               				op.push('-');
                                		}
                                		else
                                		{
                                			revise.push_back(' ');
                                			op.push('-');
                                		}
                                		break;
                			}
			}
		}
	}

	while(op.empty()==false)
	{
        revise.push_back(' ');
	revise.push_back(op.top());
        op.pop();
        counter++;
	}
        revise.push_back(' ');
	//now combine the values
	counter=0;
	while(revise.empty()==false)
	{
		storage.clear();
		//find the amount to spaces
		for(int x=0;x<revise.size();x++)
		{
			if(revise[x]==' ')
			{
				counter++;
				while(counter!=0)
				{
					revise.erase(revise.begin());
					counter--;
				}
				break;
			}
			else
			{
				storage.push_back(revise[x]);
				counter++;
			}
		}
		if(storage[0]>=48 && storage[0]<=57)
		{
		cal.push(stoi(storage));
		}
		else 
		{
		switch(storage[0]){
			case '*':{
				storeX= cal.top();
				cal.pop();
				storeY=cal.top();
				cal.pop();
				storeY=storeY*storeX;
				cal.push(storeY);
				break;
				}
			case '/':{
                                storeX= cal.top();
                                cal.pop();
                                storeY=cal.top();
                                cal.pop();
                                storeY=storeY/storeX;
                                cal.push(storeY);
				break;
                                }
			case '+':{
                                storeX= cal.top();
                                cal.pop();
                                storeY=cal.top();
                                cal.pop();
                                storeY=storeY+storeX;
                                cal.push(storeY);
				break;
                                }
			case '-':{
                                storeX= cal.top();
                                cal.pop();
                                storeY=cal.top();
                                cal.pop();
                                storeY=storeY-storeX;
                                cal.push(storeY);
                                break;
				}
			}
		}
	}
	cout<<"ANSWER: "<<cal.top() <<endl;
}
