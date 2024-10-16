#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
node *push(node *top)
{
    node *p=NULL;
    int x;
    p=(node *)malloc(sizeof(node));
    if(p==NULL)
    {
        printf("no memory allocation for node ");
    }
    else
    {
        printf("enter the value to be push ");
        scanf("%d",&x);
        p->data=x;
        p->next=top;
        top=p;
    }
    return top;
}
node *pop(node *top)
{
    node *p=NULL;
    if(top==NULL)
    {
        printf("linked list empty");
    }
    else
    {
        p=top;
        printf("%d",p->data);
        top=top->next;
    }
    return top;
}
void display(node *top)
{
    node *temp;
   if(top==NULL)
   {
    printf("no elements to display ");
   }
   else
   {
    temp=top;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
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
        printf("%d",top->data);
    }
}
int main()
{ node *top=NULL;
    
    int ch;

    do
    {
        printf("\n menu: \n1.Push \n2.Pop \n3.DISPLAY\n4.PEEK\n5.exit\n");
        printf("\n Enter your Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        top=push(top);
        break;

        case 2:
        top=pop(top);
        break;
        

        case 3:
        display(top);
        break;

        case 4:
        peek(top);
        break;
        

        case 5:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    } while (ch != 5);
}