#include"calculator.h"
using namespace std;
void calculator()
{
	bool first=true,done=false;
	char reply;
	string equation,storage;
	float storeX,storeY;
	int  answer,counter,length;
	vector<char> com, revise;
	stack<float> cal;
	stack<char> op;
	//turn equation into readable form
	//example loop through equation 2*(5-4)
	do{
	cout<<"\033[1J";
	cout<<"\033[1;1H";
	com.clear();
	revise.clear();
	while(cal.empty()==false)
	{
		cal.pop();
	}
	counter=0;
	first=true;
	cout <<"Enter a equation ending with '=' EX.2*5-4/2=" <<endl;
	cin >>equation;
	length=(equation.size())-1;
	for(int i=0;i<length;i++)
	{
		if(equation[i]<40 || equation[i]>57 )
		{
			cout<<"INVALID EQUATION"<<endl;
			return;
		}
		else if((equation[i]>=48 && equation[i]<=57)||equation[i]==46)
		{
			if(revise.empty() == 0)
			{
				if((revise.back() >= 42 && revise.back() <= 45) || revise.back()==47)
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
			switch(equation[i])
			{
				case '(' :{
						if(revise.empty())
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
	//now change string of numbers into float nu
	counter=0;
	while(revise.empty()==false)
	{
		storage.clear();
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
		if((storage[0]>=48 && storage[0]<=57)||storage[0]==46)
		{
			cal.push(stof(storage));
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
	cout <<"ANSWER: " <<cal.top() <<endl;
	cout <<"Calculate another problem?(Y/N)";
	cin >>reply;
	if(reply=='N' || reply=='n')
		done=true;
	}while(done==false);	
}
