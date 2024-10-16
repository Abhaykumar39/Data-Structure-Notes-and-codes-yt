#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
node *enqueue (node *rear)
{ node *p=NULL;
p=(node*)malloc(sizeof(node));
if(p==NULL)
{
    printf("no memory allocated");
}
else
{
    printf("the enqueue element is : %d", p->data);
    p=rear;
    if(rear==NULL)
    {
        rear=p;
    }
    else
    {
        p=p->next;
        rear=p;
    }
}
}