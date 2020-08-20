#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<ctime>
using namespace std;
int main() 
{
	int a = 0;
     char op;
	
	
	do{
	
	srand(time(NULL));  //change the random number at each turn of the game 
	int cpu = rand() % 5 + 1; //random number between 1-5
    int user;
    cout<<"\t\t\t\t\t=================================="<<endl;
    cout<<"\t\t\t\t\tROCK PAPER SCISSORS LIZARD SPOCK!"<<endl;
    cout<<"\t\t\t\t\t=================================="<<endl;
	cout<<"Enter your option"<<endl;
	cout<<"1) Rock"<<endl;	
	cout<<"2) Paper"<<endl;
	cout<<"3) Scissors"<<endl;
	cout<<"4) Lizard"<<endl;
	cout<<"5) Spock"<<endl;
	cout<<"Shoot!"<<endl;
	cin>>user;
	
	
	if(user==1)
	{
		cout<<"-You choose Rock-"<<endl;
	}
	else if(user==2)
	{
		cout<<"-You choose Paper-"<<endl;
	}
	else if(user==3){
		cout<<"-You choose Scissors-"<<endl;
	}
	else if(user==4)
	{
		cout<<"-You choose Lizard-"<<endl;
	}
	else{
		cout<<"-You choose Spock-"<<endl;
	}
	
	
	if(cpu==1)
	{
		cout<<"-CPU chooses Rock-"<<endl;
	}
	else if(cpu==2)
	{
		cout<<"-CPU chooses Paper-"<<endl;
	}
	else if(cpu==3){
		cout<<"-CPU chooses Scissors-"<<endl;
	}
	else if(cpu==4)
	{
		cout<<"-CPU chooses Lizard-"<<endl;
	}
	else{
		cout<<"-CPU chooses Spock-"<<endl;
	}
	
	//if the user==cpu
	if(cpu==user)
	{
		cout<<"Ladies and Gentlemen!"<<endl;
		cout<<"We have a tie!"<<endl;
	}
	
	
	//user chooses rock
	else if(user==1)
	{
		if(cpu==2)
		{
			cout<<"You Lose!"<<endl;
			cout<<"Paper covers Rock!"<<endl;
		}
		if(cpu==3)
		{
			cout<<"You Win!"<<endl;
			cout<<"Rock smashes Scissors!"<<endl;
		}
		if(cpu==4)
		{
			cout<<"You Win!"<<endl;
			cout<<"Rock crushes Lizard!"<<endl;
		}
		else{
			cout<<"You Lose!"<<endl;
			cout<<"Spock vaporizes Rock!"<<endl;
		}
	}
	
	
	//user chooses paper
	else if(user==2)
	{
		if(cpu==1)
		{
			cout<<"You Win!"<<endl;
			cout<<"Paper covers Rock!"<<endl;
		}
		if(cpu==3)
		{
			cout<<"You Lose!"<<endl;
			cout<<"Scissors cuts Paper!"<<endl;
		}
		if(cpu==4)
		{
			cout<<"You Lose!"<<endl;
			cout<<"Lizard eats Paper!"<<endl;
		}
		else{
			cout<<"You Win"<<endl;
			cout<<"Paper disproves Spock"<<endl;
		}
		
		
	}
	
	
	//user chooses scissors
	
	else if(user==3)
	{
		if(cpu==1)
		{
			cout<<"You Lose!"<<endl;
			cout<<"Rock smashes Scissors!"<<endl;
		}
		if(cpu==2)
		{
			cout<<"You Win!"<<endl;
			cout<<"Scissors cuts Paper!"<<endl;
		}
		if(user==4)
		{
			cout<<"You Win"<<endl;
			cout<<"Scissors decapitates Lizard!"<<endl;
		}
		else{
			cout<<"You Lose!"<<endl;
			cout<<"Spock smashes Scissors!"<<endl;
		}
	}
	
	//user chooses lizard
	else if(user==4)
	{
		if(cpu==1)
		{
			cout<<"You Lose!"<<endl;
			cout<<"Rock crushes Lizard!"<<endl;
		}
	    if(cpu==2)
		{
			cout<<"You Win!"<<endl;
			cout<<"Lizard eats Paper!"<<endl;
		}
	    if(cpu==3)
		{
			cout<<"You Lose!"<<endl;
			cout<<"Scissors decapitates Lizard!"<<endl;
		}
		else{
			cout<<"You Win!"<<endl;
			cout<<"Lizard posions Spock!"<<endl;
		}
	}
		
		//user chooses Spock
		else if(user==5)
		{
			if(cpu==1)
			{
				cout<<"You Win!"<<endl;
				cout<<"Spock vaporizes Rock!"<<endl;
			}
			if(cpu==2)
			{
				cout<<"You Lose!"<<endl;
				cout<<"Paper disproves Spock!"<<endl;
			}
			if(cpu==3)
			{
				cout<<"You Win!"<<endl;
				cout<<"Spock smashes Scissors!"<<endl;
			}
			else{
				cout<<"You Lose!"<<endl;
				cout<<"Lizard poisons Spock!"<<endl;
			}
			
		}

   
	
	cout<<"Want to play another round?(y/n)"<<endl;
	cin>>op;
	if(op=='y'||op=='Y')
	{
		a=1;
	}
	
	else{
		a=0;
	}
	
	
}
while(a==1);
	
	return 0;
}
