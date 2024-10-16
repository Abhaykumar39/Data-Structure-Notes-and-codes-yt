#include <stdio.h>
#define max 20
void push(char[], char, int *);
char pop(char[], int *);
int pred(char);
int main()
{
    char postfix[max], infix[max], stack[max], ch;
    int top = -1, j = 0, i = 0;
    printf("enter infix expression :");
    scanf("%s", infix);
    int a = strlen(infix);
    infix[a] = ')';
    push(stack, '(', &top);
    while (infix[i] != '\0')
    {
        ch = infix[i];
        if (ch == '(')
        {
            push(stack, ch, &top);
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '^')
        {
            while (pred(ch) <= pred(stack[top]))
            {
                postfix[j] = pop(stack, &top);
                j++;
            }
            push(stack, ch, &top);
        }
        else if (ch == ')')
        {
            while ((ch = pop(stack, &top)) != '(')
            {
                postfix[j] = ch;
                j++;
            }
        }
        else
        {
            postfix[j] = ch;
            j++;
        }
        i++;
    }
    postfix[j] = '\0';
    printf("%s", postfix);
}
void push(char stack[], char ch, int *top)
{
    (*top)++;
    stack[*top] = ch;
}
char pop(char stack[], int *top)
{
    char a = stack[*top];
    (*top)--;
    return a;
}
int pred(char ch)
{
    if (ch == '^')
        return 5;
    else if (ch == '*' || ch == '/' || ch == '%')
        return 4;
    else if (ch == '+' || ch == '-')
        return 3;
    else
        return 1;
}