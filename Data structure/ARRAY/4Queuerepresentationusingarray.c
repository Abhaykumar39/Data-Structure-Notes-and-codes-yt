//Queue is a linear data structure based on first in first out principle. 
// create menu driven structure and define array of queue , max , front and rear.
// In enqueue function we can declare an array of queue  if queue of rear is max -1 queue is overflow.
// In dequeue function we can declare front==-1 so r==-1 in switch. if frot and and rear are -1 queue is underflow. and one condition is that when front and rear both are equal in case of that front =-1 to start and else in f++.
// In display function we can check the condition of front and rear =-1 then no elements . here for loop i=front and less than = rear so its check to the front to rear.
// In peek function we can check front==-1 and in else we can print the front.
#include<stdio.h>
#include<stdlib.h>
#define max 10
int enqueue(int queue[],int rear)
{
    int x;
    if (rear==max-1)
    {
        printf("\n Queue Overflow ");
    }
    else
    {
        printf("\n Enter the element to be pushed: ");
        scanf("%d",&x);
        queue[++rear]=x;// rear ++ is execute first on queue of array then it store the element.
    }
    return rear;
}
int dequeue(int queue[],int front,int rear)
{
    if(front==-1&&rear==-1)
    {
        printf("\n Queue underflow");
    }
    else
    {
        printf("the dequeue element is : %d",queue[front]);
        if (front==rear)
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
{
    if(front==-1&&rear==-1)
    {
        printf("\n No elements in queue");
        return;
    }
    printf("the elements are: ");
    for(int i=front; i<=rear;i++)
        printf("%d ",queue[i]);
    
}
void peek(int queue[],int front)
{
    if(front==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("peak elements: %d",queue[front]);
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
        rear=enqueue(queue,rear);
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