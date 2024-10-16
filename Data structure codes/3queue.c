#include<stdio.h>
#define max 10
int enqueue(int queue[],int rear)
{
    int x;
    if(rear==max-1)
    {
        printf(" queue overflow : " );
    }
    else
    {
        printf(" enter the element to enqueue : ");
        scanf("%d",&x);
        rear++;
        queue[rear]=x;
    }
    return rear;
}
int dequeue(int queue[],int front,int rear)
{
    if(front==-1)
    {
        printf(" queue underflow : ");
    }
    if(front==rear)
    {
        rear=-1;
    }
    else
    {
        printf(" the dequeue element id %d ",queue[front]);
        front++;
    }
    return front;
}
void display(int queue[],int front,int rear )
{
    if(front==-1)
    {
        printf(" no elements to display : ");
    }
    else
    {
        for(int i=front; i<rear;i++)
        {
            printf("%d",queue[i]);
        }
    }
}
int main()
{
    int queue[max], front=-1,rear=-1, ch;
    do
    {
        printf("1.Enqueue \n 2.Dequeue \n 3.Display \n ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            rear=enqueue(queue, rear);
            if(front==-1)
            {
                front=0;
            }
            break;

        case 2:
            front = dequeue(queue, front , rear);
            if(front==-1)
            {
                rear=-1;
            }
            break;

        case 3:
            display(queue,front,rear);
            break;
        }
    } while (ch <= 3);
}