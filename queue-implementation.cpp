//queue implementation
#include<iostream>
using namespace std;
void insert();  
void delet();  
void display();  
int front = -1, rear = -1,n;  
int queue[100]; 
int main ()  
{  
    int choice;   
    cout<<"\n Enter the size of Queue[MAX=100]:";
    cin>>n;
    while(choice != 4)   
    {     
        cout<<"\n*****Main Menu*********\n";  
        cout<<"\n=================================================================\n";  
        cout<<"\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n";  
        cout<<"\nEnter your choice ?";  
        cin>>choice;  
        switch(choice)  
        {  
            case 1:  
    insert();  
             break;  
            case 2:  
             delet();  
             break;  
            case 3:  
             display();  
             break;  
            case 4:  
             exit(0);  
             break;  
            default:   
             cout<<"\nEnter valid choice??\n";  
        }  
    }  
    return 0;
}  
void insert()  
{  
 int item; 
 if(rear >= n-1)  
    {  
        cout<<"\nQUEUE OVERFLOW\n";  
        return;  
    } 
    cout<<"\nEnter the element\n";  
    cin>>item; 
    rear = rear+1;
    queue[rear] = item; 
    if(front == -1)  
    {  
        front = 0;  
        return;
    } 
}
void delet()  
{  
    int item; 
    if (front == -1 )  
    {  
        cout<<"\nQUEUE UNDERFLOW\n";  
        return;           
    } 
    item = queue[front]; 
 if(front == rear)  
    {  
        front = -1;  
        rear = -1 ;  
    }   
    else   
    {  
        front = front + 1;  
    }  
    cout<<"\n= value deleted "<<item;              
}  
void display()  
{  
    int i;  
    if(rear == -1)  
    {  
        cout<<"\nEmpty queue\n";  
    }  
    else  
    {   cout<<"\nprinting values .....\n";  
        for(i=front;i<=rear;i++)  
        {  
            cout<<queue[i];  
        }     
    }  
}
