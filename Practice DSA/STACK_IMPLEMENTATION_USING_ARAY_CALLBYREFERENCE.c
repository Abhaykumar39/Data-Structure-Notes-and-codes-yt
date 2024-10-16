#include<stdio.h>
#include<stdlib.h>
#define max 10
int push(int[],int*);
int pop(int[],int*);
void display(int[],int);
void peak(int[],int);
int main()
{
    int ch,stack[max],top=-1;
    do{
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.PEAK \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        top=push(stack,&top);
        break;

         case 2:
        top=pop(stack,&top);
        break;

        case 3:
        display(stack,top);
        break;

        case 4:
        peak(stack,top);
        break;
    }
    }
    while(ch<=4);
}
int push(int stack[],int *tp)
{
    int x;
    if(*tp==max-1)
    {
        printf("stack is full\n");
    }
    else
    {
        printf("enter the elements");
        scanf("%d",&x);
        (*tp)++;
        stack[*tp]=x;
    }
}
int pop(int stack[],int *tp)
{
    int z;
    if(*tp==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        z=stack[*tp];
        printf("%d",z);
        (*tp)--;
    }
}
void display(int stack[],int top)
{
   if(top==-1)
   {
    printf("stack is empty");
   }
   else
   {
    while(top>=0){
       printf("%d ",stack[top]);
    top--; 
    }
    
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