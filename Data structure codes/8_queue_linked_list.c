#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
node *enqueue(node *rear)
{
    node*p=NULL;
    int x;
    p=(node*)malloc(sizeof(struct node));
    if(p==NULL)
    {
        printf("no memory allocation ");
    }
    else
    {
        printf("enter the data to be enqueue : ");
        scanf("%d",&x);
        p->data = x;
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
    rear->next=NULL;
    return rear;
}
node *dequeue( node *front)
{ node*p=NULL;
    if(front==NULL)
    {
        printf("queue underflow");
    }
    else
    { 
        p=front;
        printf("the dequeue element is : %d",p->data);
        front=front->next;
        free(p);
    }
    return front;
}
void  display(node *front)
{
    node* temp;
    if(front==NULL)
    {
        printf("no elements to display : ");
    }
    else
    {
        temp=front;
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
int main()
{
    node* front=NULL,*rear=NULL;
    int ch;
    do
    {
       printf(" 1.Enqueu \n 2.Dequeue \n 3.display\n ");
       scanf("%d",&ch);
       switch(ch)
       {
            case 1:
            rear=enqueue(rear);
            if(front==NULL)
            {
                front=rear;
            }
            break;

            case 2:
            front=dequeue(front);
            if(front==NULL)
            {
                rear=NULL;
            }
            break;


            case 3:
            display(front);
            break;

       }
    } 
    while (ch<=3);
    

}