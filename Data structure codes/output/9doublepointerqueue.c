#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
    int data;
    struct node *next;
}node;
void enqueue(node **rear,node **front)
{
    node *p=NULL;
    int x;
    p=(node *)malloc(sizeof(node));
    if(p==NULL)
    {
        printf("no memory allocation for node");
    }
    else
    {
        printf("enter the value to be enqueue");
        scanf("%d",&x);
        p->data = x;
        if(*rear==NULL)
        {
            *rear=*front=p;
        }
        else
        {
            (*rear)->next = p;
            *rear=p;
        }
    }
    (*rear)->next=NULL;
}
node *dequeue(node **front,node **rear)
{ node *p=NULL;
    if(*front==NULL)
    {
        printf(" linked lit empty");
    }
    else
    { p=*front;
        printf("%d", p->data);
        if(*front==NULL)
        {
            *rear=NULL;
        }
        else
        {
            *front=(*front)->next;
        }
        
        free(p);
    }
    return *front;
}
void display(node **front)
{
    node *temp;
    if(*front==NULL)
    {
        printf("no elements to display");
    }
    else
    {
        temp=*front;
        while(temp!=NULL)
        {
        printf("%d",temp->data);
        temp=temp->next;
        }
        }
}
void peek(node **front)
{
    if (*front==NULL)
    {
        printf(" no elements to peek");
    }
    else
    {
        printf("%d",(*front)->data);
    }
}
int main()
{
    node* rear=NULL,*front=NULL;
    
    int ch;

    do
    {
        printf("\n menu: \n1.Enqueue \n2.Pop \n3.DISPLAY\n4.PEEK\n5.exit\n");
        printf("\n Enter your Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        enqueue(&rear,&front);
        break;
        

        case 2:
        front=dequeue(&front,&rear);
        break;

        case 3:
        display(&front);
        break;

        case 4:
        peek(&front);
        break;

        case 5:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    } while (ch != 5);
}