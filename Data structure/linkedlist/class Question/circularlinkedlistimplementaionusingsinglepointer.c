#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
node *enqueue(node *rear,node *front)
{
    int x;
    node *p=NULL;
    p=(node *)malloc(sizeof(node));
    if(p==NULL)
    {
        printf("no memory allocated \n");
    }
    else
    {
        printf("enter the elements ");
        scanf("%d",&x);
        p->data=x;
        {
            if(rear==NULL)
            {
                rear=p;
            }
            else
            {
                rear->next=p;
                rear=p;
            }
        }
    }
     rear->next=front;
    return rear;
}
node *dequeue(node* front,node *rear)
{
    node *p=NULL;
    if(front==NULL)
    {
        printf("linked list empty\n");
    }
    else
    {
        p=front;
        printf("the dequeue element is :%d ", front->data);
       if(front==rear)
       {
        front=rear=NULL;
       }
       else
       {
        front=front->next;
        rear->next=front;
       }
    }
    free(p);
    return front;
}
void display(node * front)
{
    node *temp;
    if(front==NULL)
    {
        printf("no elements to display");
    }
    else{
        temp=front;
        do
        {
            printf("%d ", temp->data);
            temp=temp->next;
        }
        while(temp!=front);
         
    }
}
void peek(node * front)
{
    if(front==NULL)
    {
        printf("no elements to peek");
    }
    else
    
    {
        printf("%d\n", front->data);
    }
}
int main()
{
    node *rear = NULL, *front = NULL;
    int ch;

    do
    {
        printf("\n menu: \n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.PEEK\n5.exit\n");
        printf("\n Enter your Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
           rear=enqueue(rear,front);
            if (front == NULL)
            {
                front = rear;
            }
            break;

        case 2:
        front=dequeue(front,rear);
        if(front==NULL)
        {
            rear=NULL;
        }
            break;

        case 3:
        display(front);
            break;

        case 4:
        peek(front);
            break;

        case 5:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    } while (ch != 5);
}