//convert a string to lower case
#include<iostream>
using namespace  std;
int main(){
char s[100];
   int i;

   cout<<"\nEnter a string : ";
   gets(s);

   for (i = 0; s[i]!='\0'; i++){
      if(s[i] >= 'A' && s[i] <= 'Z'){
         s[i] = s[i] + 32;
      }
   }
   cout<<"\nString in Lower Case = "<<s;
   return 0;	
}
