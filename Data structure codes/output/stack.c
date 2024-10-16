#include <stdio.h>
#define max 10
int push(int[], int);
int pop(int[], int);
int display(int[], int);
int peek(int[], int);
int main()
{
    int ch, top = -1, stack[max];
    do
    {
        printf("\n1.Push\n2. Pop\n 3.Display\n 4.Peek\n5.Exit\n");
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
            peek(stack, top);
        }
    } while (ch <= 4);
}
int push(int stack[], int top)
{
    int x;
    if (top == max - 1)
    {
        printf("stack is full");
    }
    else
    {
        printf("Enter A Number To be Pushed");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
    return (top);
}
int pop(int stack[], int top)
{
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("The Popped Element is: %d", stack[top]);
        top--;
    }
        return (top);
}