//insert a new node at the beginning of a Singly Linked List
#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int info;                    
    struct node *link;       
}*first;


void createNodeList(int n);     
void NodeInsertatBegin(int num);             
void displayList();

int main()
{
    int n,num;
 printf("\n\n Linked List : Insert a new node at the beginning of a Singly Linked List:\n");
 printf("------------------------------------------------------------------------------\n");
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list are : \n");  
    displayList();
    printf("\n Input data to insert at the beginning of the list : ");
    scanf("%d", &num);
    NodeInsertatBegin(num);
    printf("\n Data after inserted in the list are : \n");  
    displayList();

    return 0;
}
 
void createNodeList(int n)
{
 struct node *new1, *tmp;
    int num, i;  
 first = (struct node *)malloc(sizeof(struct node));
    if(first == NULL) 
    {
        printf(" Memory can not be allocated.");
    } 
    else
    {

        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        first-> info = num;      
        first-> link = NULL; 
        tmp = first;
 
 
        for(i=2; i<=n; i++)
        {
            new1 = (struct node *)malloc(sizeof(struct node));
 
            if(new1 == NULL) 
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
                new1->info = num;      
                new1->link = NULL; 
                tmp->link = new1; 
                tmp = tmp->link;
            }
        }
    }
} 
void NodeInsertatBegin(int num)
{
    struct node *new1;
    new1 = (struct node*)malloc(sizeof(struct node));
    if(new1 == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        new1->info = num; 
        new1->link = first; 
        first = new1; 
    }
}  

void displayList()
{
    struct node *tmp;
    if(first == NULL)
    {
        printf(" No data found in the list.");
    }
    else
    {
        tmp = first;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->info);   // prints the data of current node
            tmp = tmp->link;                 // advances the position of current node
        }
    }
}
