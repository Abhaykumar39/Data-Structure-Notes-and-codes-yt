// stack is a linear data structure which is based on lifp principle.
#include<stdio.h>
#include<stdlib.h>
#define max 10
int push(int stack[],int top)
{
    int x;
    if(top==max-1)
    {
        printf("\nstack overflow");
    }
    else
    {
        printf("enter the value to be pushed\n");
        scanf("%d",&x);
        top++;
        stack[top] = x;
    }
    return top;
}
int pop(int stack[],int top)
{
    if(top==-1)
    {
        printf("\nstack underflow");
    }
    else
    {
        printf("the poped element is : %d\n", stack[top]);
        top--;
    }
    return top;
}
  void display(int stack[],int top)
{
    if (top==-1)
    {
        printf("\n nothing to display ");
    }
    else
    {
        printf("\n Stack Elements: ");
        for(int i=top;i>=0;i--)
        {
            printf("%d ",stack[i]);
        }
    }
   
}
void peek(int stack[],int top)
{
    if(top==-1)
    {
        printf("\n no elements to peek");
    }
    else
    {
        printf(" the peek elements : %d",stack[top]);
    }
}
int main()
{
    int ch,stack[max],top=-1;
    do{
    printf("\n1.push\n2.pop\n3.display\n4.peek\n5exit");
    printf("\nenter your choice ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        top=push(stack,top);
        break;

        case 2:
        top=pop(stack,top);
        break;

        case 3:
        display(stack,top);
        break;

        case 4:
        peek(stack,top);
        break;

        case 5:
        exit(0);
    }
}
while(ch!=5);
}