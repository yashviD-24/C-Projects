//Sequenctial search demonstration
#include<iostream>
using namespace std;
int main()
{
 int k[10],n,x,i;
 cout<<"Enter size:";
 cin>>n;
 cout<<"\nEnter Values:\n";
 for(i=0;i<n;i++)
 {
  cin>>k[i];
 }
 cout<<"\nEnter Search element:";
 scanf("%d",&x);
 i=0;
 k[n]=x;
 while(k[i]!=x)
 {
  i=i+1;
 }
 if(i==n)
 {
  cout<<"Unsuccessful Search...";
 }
 else
 {
  cout<<"Successful Search...";
 }
 return 0;
}
