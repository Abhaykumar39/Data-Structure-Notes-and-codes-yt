#include<stdio.h>
#include<stdlib.h>
#define max 10
void push(int *stack[],int *top)
{
    int x;
    if(*top==max-1)
    {
        printf("stack is  overflow\n");
    }
    else
    {
        printf("enter the element at stack");
        scanf("%d",&x);
        stack[++(*top)] = x;
    }
    return (*top);
}
void pop(int *stack[],int *top)
{
    if(*top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("the pop ellement is :%d",*stack[*top]);
        (*top)--;
    }
}
void display(int *stack[],int *top)
{
    if(*top==-1)
    {
        printf("No elements to display\n");
    }
    else
    {
        for(int i=(*top);i>=0;i--)
        {
            printf("%d",stack[i]);
        }
    }
}
void peek(int *stack[],int *top)
{
    if(*top==-1)
    {
        printf("No elements to peek");
    }
    else
    {
        printf("the peek elements is : %d",*stack[*(top)]);
    }
}
int main()
{
    int stack[max],top=-1;
    
    int ch;
    do
    {
        printf("\n1.Push\n2.pop\n3.display\n4.peek\n5.exit");
        printf("\n enter your choice ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        push(&stack[0],&top);
            break;

        case 2:
        pop(&stack[0],&top);
            break;

        case 3:
           display(&stack[0],&top);
            break;

        case 4:
           peek(&stack[0],&top);
            break;

        case 5:
            exit(0);

        default:
            printf("\ninvalid choice");
        }
    } while (ch <= 5);
}