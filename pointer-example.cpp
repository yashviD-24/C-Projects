//pointer example
#include<iostream>
using namespace std;
int main()
{
   int* pc, c;
   
   c = 22;
   cout<<"Address of c: "<<c;
   cout<<"Value of c: "<<c;  // 22
   
   pc = &c;
   cout<<"Address of pointer pc: "<<pc;
   cout<<"Content of pointer pc: "<<*pc; // 22
   
   c = 11;
   cout<<"Address of pointer pc: "<<pc;
   cout<<"Content of pointer pc: "<<*pc; // 11
   
   *pc = 2;
   cout<<"Address of c: "<<c;
   cout<<"Value of c: "<<c; 
   return 0;
}
