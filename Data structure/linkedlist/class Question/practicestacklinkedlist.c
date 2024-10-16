#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
node *push(node *top)
{
    int x;
    node *p=(node *)malloc(sizeof(node));
    if(p==NULL)
    {
        printf("no memory allocated");
    }
    else
    {
        printf("Enter the value");
        scanf("%d",&x);
        p->data = x;
        p->next = top;
        top=p;
    }
    return top;
}
node *pop(node *top)
{
    if(top==NULL)
    {
        printf("stack is underflow");
    }
    else
    {
        node *p=top;
        printf("the poped element is:%d",p->data);
        top=top->next;
    }
    return top;
}
void display(node *top)
{ node *temp;
    if(top==NULL)
    {
        printf("no elements to display");
    }
    else
    {
        printf("the display element is:");
        temp=top;
        while(temp!=NULL)
        {
            printf("%d",temp);
            temp=temp->next;
        }
    }
}
void peek(node *top)
{
    if(top==NULL)
    {
    printf("no elements to peek");
    }
    else
    {
        printf("the peek element is: %d",top->data);
    }
}