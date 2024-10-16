
#include<stdio.h>
#include<stdlib.h>
#define max 10
int Enqueue(int queue[],int rear)
{
    int x;
    if(rear==max-1)
    {
        printf("queue overflow\n");
    }
    else
    {
        printf("enter the value of enqueue\n");
        scanf("%d",&x);
        queue[++rear] = x;
    }
    return rear;
}
int dequeue(int queue[],int front,int rear)
{
    if(front==-1&&rear==-1)
    {
        printf("queue underflow\n");
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
            front++;
        }
    }
    return front;
}
void display(int queue[],int front,int rear)
{ int i;
    if(front==-1&&rear==-1)
    {
        printf("no elements to display");
    }
    else
    {
        for(int i=front;i<=rear;i++) 
        printf("%d",queue[i]);
    }
}
void peek(int queue[],int front)
{
    if(front==-1)
    {
        printf("no elements to peek");
    }
    else
    {
        printf("%d",queue[front]);
    }
}
int main()
{
    int ch,queue[max],front=-1,rear=-1;
    do{
    printf("\n1.Enqueue\n2.dequeue\n3.display\n4.peek\n5exit");
    printf("\nenter your choice ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        rear=enqueue(queue,rear);
        if(front==-1)
        {
            front=0;
        }
       
        break;

        case 2:
        front=dequeue(queue,front,rear);
        {
            if(front==-1)
            {
                rear=-1;
            }
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
    }
}
while(ch!=5);
}