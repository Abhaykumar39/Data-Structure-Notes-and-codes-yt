#include<stdio.h>
#include<stdlib.h>
#define max 10
int push(int stack[],int top)
{
    int x;
    if(top==max-1)
    {
        printf("\n stack overflow ");
    }
    else
    {    prinf("enter the elements to be pushed\n");
         scanf("%d",x);
        stack[++top]=x;

    }
    return top;
}
int pop(int stack[], int top)
{
    if(top==-1)
    {
        printf("\n stack underflow ");
    }
    else
    {
        printf("\n pop element is: %d ",stack[top]);
        top--;
    }
    return top;
}
void display(int stack[], int top)
{
    if (top==-1)
    {
        printf("\n no elements to display ");
    }
    else
    {
      for(int i=top;i>=0;i--)
      printf("%d ",stack[i]);

    }
}
void peak(int stack[], int top)
{
    if (top==-1)
    {
        printf("\n stack unnderflow");
    }
    else
    {
        printf("%d ",stack[top]);
    }
}