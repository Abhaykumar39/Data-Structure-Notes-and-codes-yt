#include <stdio.h>
#define max 20
void push(int[], int, int *);
int pop(int[], int *);
main()
{
    char postfix[max], ch;
    int stack[max];
    int top = -1, i = 0;
    printf("enter postfix expression :");
    scanf("%s", postfix);
    while (postfix[i] != NULL)
    {
        ch = postfix[i];
        if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        {
            int x;
            printf("enter value for %c :", ch);
            scanf("%d", &x);
            push(stack, x, &top);
        }
        else
        {
            int a, b, r;
            a = pop(stack, &top);
            b = pop(stack, &top);
            if (ch == '+')
            {
                r = b + a;
                push(stack, r, &top);
            }
            else if (ch == '-')
            {
                r = b - a;
                push(stack, r, &top);
            }
            else if (ch == '*')
            {
                r = b * a;
                push(stack, r, &top);
            }
            else if (ch == '-')
            {
                r = b - a;
                push(stack, r, &top);
            }
            else if (ch == '*')
            {
                r = b * a;
                push(stack, r, &top);
            }
            else if (ch == '/')
            {
                r = b / a;
                push(stack, r, &top);
            }
            else if (ch == '%')
            {
                r = b % a;
                push(stack, r, &top);
            }
            else
            {
                r = b ^ a;
                push(stack, r, &top);
            }
        }
        i++;
    }
    printf("%d", stack[top]);
}
void push(int stack[], int x, int *top)
{
    (*top)++;
    stack[*top] = x;
}
int pop(int stack[], int *top)
{
    int a = stack[*top];
    (*top)--;
    return a;
}