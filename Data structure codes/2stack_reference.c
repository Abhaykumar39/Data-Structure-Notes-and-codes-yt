#include <stdio.h>
#define max 10
void push(int stack[], int *top)
{
    int x;
    if (*top == max - 1)
    {
        printf(" stack is overflow ");
    }
    else
    {
        printf(" enter the data : ");
        scanf("%d", &x);
        (*top)++;
        stack[(*top)] = x;
    }
}
void pop(int stack[], int *top)
{
    if (*top == -1)
    {

        printf(" stack underflow ");
    }
    else
    {
        printf("%d ", stack[*top]);
        (*top)--;
    }
}
void display(int stack[], int *top)
{
    if (*top == -1)
    {
        printf(" no elements to display : ");
    }
    else
    {
        for (int i = *top; i >= 0; i--)
        {
            printf(" %d ", stack[i]);
        }
    }
}
int main()
{
    int stack[max], top = -1, ch;
    do
    {
        printf("\n 1. push \n 2. pop \n 3. display \n ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push(stack, &top);
            break;

        case 2:
         pop(stack, &top);
            break;

        case 3:
            display(stack,&top);
            break;
        }
    } while (ch <= 3);
}
