#include<stdio.h>
#define max 10
int enqueue(int queue[],int rear,int front)
{
    int x;
    if((rear+1)%max==front)
    {
        printf("Queue overflow");
    }
    else
    {
        printf("enter the element");
        scanf("%d",&x);
        rear=(rear+1)%max;
        queue[rear]=x;
    }
    return rear;
}
int dequeue(int queue[],int front,int rear)
{
    if(front==-1)
    {
        printf("stack underflow");
    }
    else
    {
        printf("%d",queue[front]);
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
void display(int queue[],int front,int rear)
{
    if(front==-1)
    {
        printf("queue underflow");
    }
    else
    {
        for(int i=front;i<=rear;i=(i+1)%max)
        {
            printf("%d",queue[i]);
        }
    }
}
void peek(int queue[],int front)
{
    if(front==-1)
    {
        printf("queue underflow");
    }
    else
    {
        printf("%d",queue[front]);
    }
}
int main()
{
    int queue[max],rear=-1,front=-1;
    
    int ch;
    do
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.display\n4.peek\n5.exit");
        printf("\n enter your choice ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        rear=enqueue(queue,rear,front);
        if(front==-1)
        front=0;
            break;

        case 2:
        front=dequeue(queue,front,rear);
        if(front==-1)
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
            printf("\ninvalid choice");
        }
    } while (ch <= 5);
}