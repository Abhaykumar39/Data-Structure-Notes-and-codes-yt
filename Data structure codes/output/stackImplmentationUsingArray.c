#include <stdio.h>
#include <stdlib.h>
#define max 10
int push(int[], int);
int pop(int[], int) ;
void display(int[], int);
  void peak(int[], int);
   int main()
{
    int stack[max], ch, top = -1;
    do
    {
        printf("1 - push\n2- pop\n3- display\n4- peak\n5- exit");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            top = push(stack, top);
            break;
        case 2:
            top = pop(stack, top);
            break;
        case 3:
            display(stack, top);
            break;
        case 4:
            peak(stack, top);
            break;
        case 5:
            exit(0);
            break;
        }
    }
        while (ch <= 4);    
}
int push(int stack[], int top)
{
        int x;
        if (top == max - 1)
        {
            printf("stack is full\n");
        }
        else
        {
            printf("enter values  ");
            scanf("%d ", &x);
            top++;
            stack[top] = x;
        }
        return (top);
}
    int pop(int stack[], int top)
    {
        int z = 0;
        if (top == -1)
        {
            printf("stack is empty\n");
        }
            else
            {
                z = stack[top];
            
            printf("%d", z);
            top--;
            }
        
        return top;
    
    }
    void display(int stack[], int top)
    {
     if (top == -1)
    {
        printf("stack is empty ");
    }
    else
        {
            while (top >= 0)
            {
                printf("%d ", stack[top]);
                    top--;
            }
        }
    }
void peak(int stack[], int top)
{
if(top == -1)
{
 printf("stack is empty ");
}
else
{
    printf("%d ", stack[top]);
}
}
