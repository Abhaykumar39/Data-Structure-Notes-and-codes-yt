#include<stdio.h>
#include<stdlib.h>
#define max 10
void enqueue(int queue[],int *rear)
{
    int x;
    if(*rear==max-1)
    {
        printf("Queue overflow\n");
    }
    else
    {
        printf("enter the value to be enequeued\n");
        scanf("%d",&x);
        (*rear)++;
        queue[*rear] = x;
    }
}
void dequeue(int queue[],int *rear,int *front)
{
    if(*front==-1)
    {
        printf("Queue undeflow\n");
    }
    else
    {
        printf("%d",queue[*front]);
        if(*front==*rear)
        {
            *front=-1;
        }
        else
        {
            (*front)++;
        }
    }
}
void display(int queue[],int *front ,int *rear)
{
    if(*front==-1)
    {
        printf("no elements to display");
    }
    else
    {
        for(int i=*front; i<=*rear; i++)
        {
            printf("%d",queue[i]);
        }
    }
}
void peek(int queue[],int *front)
{
    if (*front==-1)
    {
        printf("no elements to peek");
    }
    else
    {
        printf("%d",queue[*front]);
    }
}
int main()
{
    int rear=-1,queue[max],front=-1;
    int ch;

    do
    {
        printf("\n menu: \n1.Enqueue \n2.Dequeue \n3.DISPLAY\n4.PEEK\n5.exit\n");
        printf("\n Enter your Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        enqueue(queue,&rear);
        if(front==-1)
        {
            front=0;
        }
        break;
        
        case 2:
        dequeue(queue,&rear,&front);
        if(front==-1)
        {
            rear-1;
        }
        break;

        case 3:
        display(queue,&front,&rear);
        break;

        case 4:
        peek(queue,&front);
        break;

        case 5:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    } while (ch != 5);
}