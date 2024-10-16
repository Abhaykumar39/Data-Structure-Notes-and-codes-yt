#include<stdio.h>
#include<stdlib.h>
#define max 10
int enqueue(int queue[],int front ,int rear)
{
    int x;
    if ((rear+1)%max==front)
    {
        printf("queue Overflow\n");
    }
    else
    {
        printf("\n enter the Element to be Enqueue : ");
        scanf("%d",&x);
        rear=(rear+1)%max;
        queue[rear]=x;
    }
    return rear;
}
int dequeue(int queue[],int front,int rear)
{
    if (front==-1)
    {
        printf("queue is underflow ");
    }
    else 
    {
        printf("\n the deleted element is : %d",queue[front]);
        if(front==rear)
        {
            front=-1;
        }
        else
        {
            front=(front+1)%max;
        }
    }
    return front;
}
void display(int queue[],int front ,int rear)
{
    if(front==-1)
    {
        printf("no display elements");
    }
    else
    {
        for(int i=front; i<=rear; i=(i+1)%max)
        {
            printf("%d ",queue[i]);
        }
    }
}
void peek(int queue[],int front )
{
    if(front==-1)
    {
        printf("no elements to peek");
    }
    else
    {
        printf("%d ",queue[front]);
    }
}

int main()
{
    int ch, queue[max],front=-1,rear=-1;

    do
    {
       printf("\nmenu: \n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.PEEK\n5.exit\n");
       printf("\n Enter your Choice : ");
          scanf("%d", &ch);
       switch(ch)
       {
        case 1:
        rear=enqueue(queue,front,rear);
        if(front==-1)
        {
            front=0;
        }
        break;

        case 2:
        front=dequeue(queue,front,rear);
        if (front==-1)
        {
            rear=-1;
        }
        break;

        case 3:
        display(queue,front,rear);
        break;

        case 4:
        peek(queue,front);
        break;

        case 5:
        exit(0);
       
       default: 
       printf("Invalid choice\n");
       }
    }while (ch!=5);  
}