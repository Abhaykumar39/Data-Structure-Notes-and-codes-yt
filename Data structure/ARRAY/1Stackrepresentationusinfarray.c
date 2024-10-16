// stack is a linear data structure that follow last in first out principle.
// Array is a linear data structure in which array is stored in contigeous manner.
//  create menu driven structure and define array, max and top.
//  create the Push function in which we declare a variable and store it in stackk[top].
//  if the size of top is  max-1 then stack is overflow.
// create the pop function if the top is -1 the stack is underflow and we print the deleted element,top--.
// create display function if the top is -1 no elemnets to display the start the for loop i=top because of stack, i>=0.
// create the push function if the top is -1 the stack is underflow and in else we print the stack[top].
#include <stdio.h>
#include <stdlib.h>
#define max 10
int push(int stack[], int top)
{
    int x;
    if (top == max - 1)
    {
        printf("\nstack overflow ");
    }
    else
    {
        printf("\nenter the value to be push ");
        scanf("%d", &x);
        stack[++top] = x; // Here the ++top will be execute first and then it store on stack.
    }
    return top;
}
int pop(int stack[], int top)
{
    if (top == -1)
    {
        printf("\nstack underflow ");
    }
    else
    {
        printf("\npop element is %d", stack[top]);
        top--;
    }
    return top;
}
void display(int stack[], int top)
{
    if (top == -1)
    {
        printf("\n nothing to display ");
    }
    else
    {
        printf("\n Stack Elements: ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
    }
}
void peek(int stack[], int top)
{
    if (top == -1)
    {
        printf("\nstack underflow ");
    }
    else
    {
        printf("top element: %d\n", stack[top]);
    }
}
int main()
{
    int ch, stack[max], top = -1;

    do
    {
        printf("\nmenu: \n1.PUSH\n2.POP\n3.DISPLAY\n4.PEAK\n5.exit\n");
        printf("\n Enter your Choice : ");
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
            break;

        case 5:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    } while (ch != 5);
}