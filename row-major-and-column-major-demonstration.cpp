//Row major and Column major demonstration
#include <iostream>
using namespace std;
int main()
{
    int a[3][2];
    int i,j;
    cout<<"Enter values:"<<endl;
    for(i=0;i<3;i++)
    {
     for(j=0;j<2;j++)
     {
      cin>>a[i][j];
  }
 }
 cout<<endl<<"Row major:-"<<endl;
 for(i=0;i<3;i++)
 {
  for(j=0;j<2;j++)
  {
   cout<<"a["<<i<<"]["<<j<<"]="<<a[i][j]<<endl;
  }
 }
 cout<<endl<<"Column major:-"<<endl;
 for(j=0;j<2;j++)
 {
  for(i=0;i<3;i++)
  {
   cout<<"a["<<i<<"]["<<j<<"]="<<a[i][j]<<endl;
  }
 }
 return 0;
}
