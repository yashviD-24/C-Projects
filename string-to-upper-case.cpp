//convert a string to upper case
#include<iostream>
using namespace  std;
int main()
{
   char s[100];
   int i = 0;

   cout<<"\nEnter a string : ";
   gets(s);

   while(s[i]!='\0') 
   {
      if(s[i] >= 'a' && s[i] <= 'z') 
	  {
         s[i] = s[i] - 32;
         i++;
      }
   }

   cout<<"\nString in Upper Case = "<<s;
   return 0;	
}
