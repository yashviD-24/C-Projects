//concatenate two strings
#include<iostream>
using namespace std;
int main()
{
	char s1[20],s2[20],s3[20];
	int i=0,j=0,k=0;
	cout<<"Enter the string1:";
	cin>>s1;
	cout<<"Enter the string2:";
	cin>>s2;
	
	
	while( s1[i]!='\0')
	{
		s3[k]=s1[i];
		i++;
		k++;
	}
	while( s2[j]!='\0')
	{
		s3[k]=s2[j];
		k++;
		j++;
	}

	s3[k]='\0';
	cout<<"String3:"<<s3;
	return 0;
}
