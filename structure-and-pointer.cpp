//structure and pointer
#include<iostream>
using namespace std;
struct student
{
 char std_name[20];
 int std_en;
 int std_sem;
};

int main()
{
 struct student s,*sp;
 sp=&s;
 cout<<"Enter student Name: ";
 cin>>sp->std_name;
 cout<<"Enter Enrollment Number: ";
 cin>>sp->std_en;
 cout<<"Enter Student Semester: ";
 cin>>sp->std_sem;
 cout<<"\n\n";
 cout<<"------------------------------\n";
 cout<<"Student Details\n";
 cout<<"------------------------------\n";
 cout<<"Student Name: "<<sp->std_name;
 cout<<"\nStudent Enrollment No: "<<sp->std_en;
 cout<<"\nStudent Semster: "<<sp->std_sem;
 return 0;
}
