#include<stdio.h>
#include<stdlib.h>
#define max 10
int push(int stack[],int top)
{
    int x;
    if (top==max-1)
    {
        printf("stack overflow");
    }
    else
    {
        printf("enter the element to be pushed ");
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
        printf(" stack underflow");
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
    if(top==-1)
    {
        printf(" stack underflow");
    }
    else
    {
        for(int i=top; i>=0; i--)
        {
            printf("%d",stack[i]);
        }
    }
}
void peek (int stack[],int top)
{
    if(top==-1)
    {
        printf(" no peek elements");
    }
    else
    {
        printf("%d",stack[top]);
    }
}
int main()
{
    int stack[max],ch,top=-1;

    do
    {
        printf("\nmenu: \n1.PUSH\n2.POP\n3.DISPLAY\n4.PEAK\n5.exit\n");
        printf("\n Enter your Choice : ");
        scanf("%d", &ch);
        switch (ch)
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

        default:
            printf("Invalid choice\n");
        }
    } while (ch != 5);
}