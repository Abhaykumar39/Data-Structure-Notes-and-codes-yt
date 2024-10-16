#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
node *enqueue(node * rear,node *front)
{
    int x;
    node *p=NULL;
    p=(node *)malloc(sizeof(struct node));
    if(p==NULL)
    {
        printf("no memory allocation");
    }
    else
    {
        printf("enter the element to be enqueue");
        scanf("%d",&x);
        p->data=x;
        if(rear==NULL)
        {
            rear=p;
        }
        else                                              
        {
            rear->next=p;
            rear=p;
        }
        rear->next=front;
    }
    return rear;
}
node* dequeue(node *rear,node *front)
{
    node *p=NULL;
    if(front==NULL)
    {
        printf("underflow");
    }
    else
    {
        p=front;
        printf("%d",p->data);
        if(front==rear)
        {
                        front=rear=NULL;
        }
        else
        {
            front=front->next;
            rear->next=front;
        }
        free(p);
    }
     return front;
    
}
void display(node *front)
{
    if(front==NULL)
    {
        printf("no elements to display");
    } 
    else
    {
        node *temp;
        temp=front;
        do{
            printf("%d",temp->data);
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
        printf("\n1.Enqueue\n2.Dequeue\n3.display\n4.peek\n5.exit");
        printf("\n enter your choice ");
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
        dequeue(rear, front);
            if (front == NULL)
            {
                rear = NULL;
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
            printf("\ninvalid choice");
        }
    } while (ch <= 5);
}
