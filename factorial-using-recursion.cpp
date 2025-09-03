//factorial of a number using recursion
#include<iostream>
using namespace std;
int fact(int); //declaration
int main()
{
 int n,i;
 cout<<"Enter number";
 cin>>n;
 cout<<"Factorial= %d"<<fact(n);  //calling
 return 0;
}
int fact(int N) //definition
{
 if(N==0 || N==1)
 {
  return 1;
 }
 else
 {
  return (N*fact(N-1));
 }
}

