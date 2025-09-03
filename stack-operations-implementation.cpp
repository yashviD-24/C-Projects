//stack implementation 
#include<iostream>
using namespace std;
int stack [100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
	top =-1;
	cout<<"entr size[max=100] ;";
	cin>>n;
	cout<<"stack op using array...";
	cout<<"\n 1. push, \n 2.pop \n 3.display \n 4. exit\n";
	do
	{
		cout<<"enter choice";
		cin>>choice;
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				cout<<"EXIT...";
				default:
					cout<<"please enter valid choice:";					
		}
	}while(choice!=4);
	return 0;
	
	return 0;
}
