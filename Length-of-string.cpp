//find the length of a string
#include<iostream>
using namespace  std;
int main()
{
   char Str[1000];
	int count=0;

	cout<<"Enter the String: ";
	gets(Str);

	while(Str[count] != '\0')
	count=count+1;

	cout<<"Length of Str is "<<count;

	return 0;	
}
