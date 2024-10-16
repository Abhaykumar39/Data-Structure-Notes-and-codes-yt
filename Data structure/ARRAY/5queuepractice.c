#include <stdio.h>
#include <stdlib.h>
#define max 10

int enqueue(int queue[], int rear) // if f==-1,f=0
{
    int x;
    if (rear == max - 1)
    {
        printf("queue is overflow");
    }
    else
    {
        printf("enter the element");
        scanf("%d", &x);
        queue[++rear] = x;
    }
    return rear;
}
int dequeue(int queue[], int rear, int front) // if f==-1,r=-1.
{
    if (front == -1 && rear == -1)
    {
        printf("queue is underflow");
    }
    else
    {
        printf("%d", queue[front]);
        if (front == rear)
        {
            front = -1;
        }
        else
        {
            front++;
        }
    }
    return front;
}
void display(int queue[], int front, int rear)
{
    if (front == -1 && rear == -1)
    {
        printf("no elements to display");
    }
    else
    {
        for (int i = front; i <= rear; i++)
            printf("%d", queue[i]);
    }
}
void peak(int queue[], int front)
{
    if (front == -1)
    {
        printf("no elements to peak");
    }
    else
    {
        printf("the peak element : %d", queue[front]);
    }
}
