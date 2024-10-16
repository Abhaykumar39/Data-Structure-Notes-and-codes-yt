#include<stdio.h>
#include<stdlib.h>
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
    printf("enter the element to be enqueue");
    scanf("%d",&x);
    rear=(rear+1)%max;
    queue[rear]=x;
  }
  return rear;
}
int dequeue(int queue[],int rear,int front)
{
    if(front==-1)
    {
        printf("Queue underflow");
    }
    else
    {
        printf("%d",queue[front]);
        if(front==rear)
        {
            front=0;
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
        printf("no elements to display");
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
    if (front==-1)
    {
        printf("no elements to peek");
    }
    else
    {
        printf("%d",queue[front]);
    }
}
int main()
{ int queue[max],front=-1,rear=-1;
    
    int ch;

    do
    {
        printf("\n menu: \n1.Enqueue \n2.Dequeue \n3.DISPLAY\n4.PEEK\n5.exit\n");
        printf("\n Enter your Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        rear=enqueue(queue,rear,front);
        if(front==-1)
        {
            front=0;
        }
        break;

        case 2:
        front=dequeue(queue,rear,front);
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
            printf("Invalid choice\n");
        }
    } while (ch != 5);
}