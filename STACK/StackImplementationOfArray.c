#include<stdio.h>
#include<stdlib.h>
#define max 10
int push(int[],int);
int pop(int[],int);
void display(int[],int);
void peak(int[],int);
int main()
{
    int stack[max],top=-1,ch;
    do
    {
    printf("\n 1.push \n 2.pop \n 3.diplay \n 4.peak \n5.exit \n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    top= push(stack,top);
    break;
    
    case 2:
    top= pop(stack,top);

    case 3:
   display(stack,top);

    case 4:
    peak(stack,top);
    }
    }
    while(ch<=4);
}
int push(int stack[],int top)
{
    int x;
    if (top==max-1)
    {
        printf("stack is full");
    }
    else
    {
        printf("enter the elements ");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
    return top;
}
int pop(int stack[],int top)
{
    int z;
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        z=stack[top];
        printf("%d",z);
        top--;
    }
    return top;
}
void display(int stack[],int top)
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        while(top>=0)
        printf("%d",stack[top]);
        top--;
    }
}
void peak(int stack[],int top) 
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("%d",stack[top]);
    }
}