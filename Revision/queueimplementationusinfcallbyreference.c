#include<stdio.h>
#define max 10
void enqueue(int *queue,int *rear)
{ int x;
    if(*rear==max-1)
    {
        printf("queue is overflow");
    }
    else
    {
        printf("enter the element to be enqueue ");
        scanf("%d",&x);
         queue[++(*rear)]=x;
    }
}
void dequeue(int *queue,int *front,int *rear)
{
    if(*front==-1&&*rear==-1)
    {
        printf("queue underflow");
    }
    else
    {
        printf(" the dequeue element is :%d",queue[*front]);
        if(*front==*rear)
        {
            (*front)=-1;
        }
        else
        {
            (*front)++;
        }
    }
}
void display(int *queue,int *front,int *rear)
{
    if(*front==-1)
    {
        printf("queue is empty");
    }
    else
    {
        for(int i=*front;i<=(*rear);i++)
        {
            printf("%d",queue[i]);
        }
    }
}
void peek(int *queue,int *front)
{
    if(*front==-1)
    {
        printf("no elemenets to peek");
    }
    else
    {
        printf("the peek element is : %d ",queue[(*front)]);
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
        enqueue(&queue[0],&rear);
        if(front==-1)
        front=0;
            break;

        case 2:
        dequeue(&queue[0],&front,&rear);
        if(front==-1)
        {
            rear=-1;
        }
            break;

        case 3:
        display(&queue[0],&front,&rear);
            break;

        case 4:
        peek(&queue[0],&front);
            break;

        case 5:
            exit(0);

        default:
            printf("\ninvalid choice");
        }
    } while (ch <= 5);
}