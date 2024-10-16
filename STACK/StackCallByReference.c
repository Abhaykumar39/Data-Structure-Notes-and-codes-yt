#include<stdio.h>
#include<stdlib.h>
#define max 10
int push(int[],int*);
int pop(int[],int*);
void display(int[],int*);
void peak(int[],int*);
int main()
{
    int stack[max],top=-1,ch;
    do{
        printf("\n1.push\n2.pop\n3.display\n4.peak\n");
        scanf("%d",&ch);
        switch(ch)
{
        case 1:
        push(stack,&top);
        break;

        case 2:
        pop(stack,&top);
        break;

        case 3:
       display(stack,&top);
        break;

        case 4:
        peak(stack,&top);
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
    else{
        printf("emter trhe value ");
        scanf("%d",&x);
        (*tp)++;
        stack[*tp] = x;
    }
}
int pop(int stack[],int *tp)
{
    int z;
    if(*tp==-1)
    {
        printf("stack is empty");
    }
    else
    {    z=stack[*tp];
    printf("%d",z);
    (*tp)--;
    }
}
void displaykm (int stack[],int *tp )
{
    if(*tp==-1)
    {
        printf("stack is empty");
    }
    else
    {
    while(*tp>=0)
    printf("%d",stack[*tp]);
    (*tp)--;
    }
}
void peak (int stack[],int *tp)
{
    if(*tp==-1)
    {
        printf("stack is empty ");
    }
    else
    {
       printf("%d",*tp);
    }
}