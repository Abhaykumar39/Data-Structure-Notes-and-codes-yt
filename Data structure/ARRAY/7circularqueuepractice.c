#include<stdio.h>
#include<stdlib.h>
#define max 10
int enqueue(int queue[],int front, int rear)
{
    int x;
    if ((rear+1) % max==front)
    {
        printf("Queue Overflow");
    }
    else
    {
        printf("enter the elements");
        scanf("%d",&x);
        rear=(rear+1) % max;
        queue[rear]=x;
    }
return rear;
}
int dequeue(int queue[],int front,int rear)
{
    if(front==-1)
    {
        printf("Queue underflow");
    }
    else
    {
        printf("the deleted element are : %d",queue[front]);
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
void display(int queue[], int front,int rear)
{
    if (front==-1)
    {
        printf("no elment to display");
    }
    else
    {
      for (int i=front;i<=rear;i=(i+1)%max)
      printf("the elements are: %d ",queue[i]);
    }
}