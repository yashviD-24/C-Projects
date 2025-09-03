//convert a string to lower case
#include<iostream>
using namespace std;
int main(){
	char s[20];
	int i=0;
	cout<<"Enter the string:";
	cin>>s;
	
	while(s[i]!='\0'){
		if(s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i]=s[i]+32;
		}
		i++;
	}
	
	cout<<"String in Lower case:"<<s;
	return 0;
}
