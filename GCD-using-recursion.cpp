//GCD of two numbers using recursion
#include<iostream>
using namespace std;
int gcd(int,int); //declaration
int main()
{
 int m,n;
 cout<<"Enter first number ";
 cin>>m;
 cout<<"Enter second number ";
 cin>>n;
 cout<<"GCD="<<gcd(m,n);  //calling
 return 0;
}
int gcd(int m, int n) //definition
{
 if(n>m)
 {
  return gcd(n,m);
 }
 else if(n==0)
 {
  return m;
 }
 else
 {
  return (gcd(n,m%n));
 }
}

