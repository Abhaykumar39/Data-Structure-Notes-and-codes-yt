#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
void push(node **top)
{ int x;
node *p=NULL;
 p=(node*)malloc(sizeof(struct node));
    if(p==NULL)
    {
        printf(" no memory allocation ") ;
    }
    else
    {
        printf(" enter the data : ");
        scanf("%d",&x);
        p->data = x;
        p->next=*top;
        *top=p;
    }
}
void pop(node **top)
{
    node *p=NULL;
    if(*top==NULL)
    {
        printf(" stack underflow ");
    }
    else
    {
        p=*top;
        printf(" the pop element is : %d",p->data);
        *top=(*top)->next;
        free(p);
    }
}
void display(node **top)
{
    if(*top==NULL)
    {
        printf(" no elements to display ");

    }
    else{
        node *temp=*top;
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
int main()
{
    node  *top=NULL;
    int ch;
    do
    {
        printf("1.push\n 2.pop\n 3.display\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push(&top);
            break;

            case 2:
            pop(&top);
            break;

            case 3:
            display(&top);
            break;
        }
    } while (ch<=3);
    
}