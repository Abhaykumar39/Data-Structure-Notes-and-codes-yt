//In case of call by reference we have not to return anything because it store the variable value declare in function.
// In  case of pushed function we send both array and varible as reference and in case of array there is no changes or adding * and in variable we send the * as reference.
// in case of poped we send array and top as reference and check condition of underflow and then tp--.
#include<stdio.h>
#include<stdlib.h>
#define max 10
void push(int *stack,int *tp)
{
    int x;
    if(*tp==max-1)
    {
        printf("\n Stack Overflow");
    }
    else
    {
        printf("enter the value to be pushed\n");
        scanf("%d",&x);
        (*tp)++;
        stack[*tp]=x;
    }
}
void pop(int *stack,int *tp) 
{
    if(*tp==-1)
    {
        printf("\n stack underflow");
    }
    else
    {
        printf("the poped element is : %d\n",stack[*tp]);
        (*tp)--;
    }
}
void display(int *stack,int *tp)
{
    if(*tp==-1)
    {
        printf("\n no elements to display");
    }
    else
    {
        printf("stack elements are: ");
       for (int i=*tp;i>=0;i--)
       {
        printf("%d ",stack[i]);
       }
    }
}
void peek(int *stack,int *tp)
{
    if (*tp==-1)
    {
        printf("\n no elements to peek");
    }
    else
    {
        printf(" \n the peek element is : %d\n ",stack[*tp]);
    }
}
int main()
{
    int ch, stack[max],top=-1;

    do
    {
       printf("\nmenu: \n1.PUSH\n2.POP\n3.DISPLAY\n4.PEAK\n5.exit\n");
       printf("\n Enter your Choice : ");
          scanf("%d", &ch);
       switch(ch)
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
        peek(&stack,&top);
        break;

        case 5:
        exit(0);
       
       default: 
       printf("Invalid choice\n");
       }
    }while (ch!=5);  
}