//stack  is a linear data structure which  is based on last in first out.
#include<stdio.h>
#include<stdlib.h>
#define max 10
int push(int  stack[],int top)
{
    int x;
    if(top==max-1)
    {
        printf("stack overflow");
    }
    else
    {
        printf("enter the elements to be pushed");
        scanf("%d",&x);
        stack[++top] = x;
    }
    return top;
}
int pop(int stack[],int top)
{
    if (top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("%d",stack[top]);
        top--;
    }
    return top;
}
void display(int stack[],int top)
{
    if (top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d",stack[i]);
        }
    }
}
void peek(int stack[],int top)
{
    if(top==-1)
    {
        printf("no elements to peek");
    }
    else
    {
        printf("%d",stack[top]);
    }

}
int main()
{
    int ch,stack[max],top=-1;
   
    do
    {
        printf("\n1.Push\n2. Pop\n 3.Display\n 4.peek\n 5.exit\n");
        printf("enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        top=push(stack,top);
            break;

        case 2:
        top=pop(stack,top);
            break;\

        case 3:
        display(stack,top);
        break;

        case 4:
        peek(stack,top);
            break;
        }
    } while (ch <= 4);
}