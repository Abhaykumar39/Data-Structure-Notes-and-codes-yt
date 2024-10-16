#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
   int data;
   struct node *next;
}node;
node *cenqueue(node *rear,node *front)
{
    int x;
    node *p=NULL;
    p=(node *)malloc(sizeof(node));
    if(p==NULL)
    {
        printf("no memory allocation ");
    }
    else
    {
        printf("enter the value to be enqueued ");
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
    }
    rear->next=front;
    return rear;
}
node *cdequeue(node *rear,node *front)
{
    node *p=NULL;
    if(front==NULL)
    {
        printf("linked list empty");
    }
    else
    { p=front;
        printf("%d",p->data);
            front=front->next;
            rear->next=front;
        free(p);
    }
return front;
}
void display(node *front)
{
    node *temp;
    if(front==NULL)
    {
        printf("no elemets to display");
    }
    else
    { temp=front;
       do
       {
        printf("%d",temp->data);
        temp=temp->next;

       } while (temp!=front);
       
    }
}
void peek(node *front )
{
    if(front==NULL)
    {
        printf("no peek elements ");
    }
    else
    {
        printf("%d",front->data);
    }
}
int main()
{
    node *rear,*front;
    int ch;

    do
    {
        printf("\n menu: \n1.Insert \n2.Delete \n3.DISPLAY\n4.PEEK\n5.exit\n");
        printf("\n Enter your Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        rear=cenqueue(rear,front);
        if(front==NULL)
        {
            front=rear;
        }
        break;

        case 2:
        front=cdequeue(rear,front);
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