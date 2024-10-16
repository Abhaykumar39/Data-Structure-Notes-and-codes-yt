#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
void *enqueue(node **rear)
{
    int x;
    node *p=NULL;
    p=(node *)malloc(sizeof(node));
    if(p==NULL)
    {
        printf("no memory allocated\n");
    }
    else
    {
        printf("enter the value to be enqueue\n");
        scanf("%d",&x);
        p->data=x;
        if(*rear==NULL)
        {
            *rear=p;
        }
        else
        {
            (*rear)->next=p;
            *rear=p;
        }
        (*rear)->next=NULL;
    }
}
void *dequeue(node **front)
{
    node *p=NULL;
    if(*front==NULL)
    {
        printf("queue underflow\n");
    }
    else
    {
        p=*front;
        printf("%d",(*front)->data);
        *front=(*front)->next;
    }
    free(p);
}
void display(node *front)
{
    node *temp;
    if(front==NULL)
    {
        printf("no elements to display");
    }
    else
    {
        temp=front;
        while(temp!=NULL)
        {printf("%d",temp->data);
        temp=temp->next;}
    }
}
void peek (node *front)
{
    if(front==NULL)
    {
        printf("no peek element");
    }
    else
    {
        printf("%d",front->data);
    }
}
int main()
{
    node *rear = NULL, *front = NULL;
    int ch;

    do
    {
        printf("\n menu: \n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.PEEK\n5.exit\n");
        printf("\n Enter your Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
           enqueue(&rear);
            if (front == NULL)
            {
                front = rear;
            }
            break;

        case 2:
        dequeue(&front);
        if(front==NULL)
        {
            rear=NULL;
        }
            break;

        case 3:
        display(front);
            break;

        case 4:
        peek(front);
            break;

        case 5:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    } while (ch != 5);
}