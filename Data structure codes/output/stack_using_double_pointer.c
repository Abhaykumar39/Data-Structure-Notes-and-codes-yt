#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
    int data;
    struct stack *next;
} stk;
void push(stk **);
void pop(stk **);
void display(stk *);
int main()
{
    int ch;
    stk *top = NULL;
    do
    {
        printf("\n1.Push\n2. Pop\n 3.Display\n 4.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push(&top);
            break;
        case 2:
            pop(&top);
            break;
        case 3:
            display(top);
            break;
        }
    } while (ch <= 3);
}
void push(stk **tp)
{
    int x;
    stk *p = NULL;
    p = (stk *)malloc(sizeof(stk));
    if (p != NULL)
    {
        printf("Enter A Number: ");
        scanf("%d", &x);
        p->data = x;
        p->next = *tp;
        *tp = p;
    }
}
void pop(stk **tp)
{
    stk *p = NULL;
    if (*tp == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        p = *tp;
        printf("The Popped Element Is %d", p->data);
        *tp = ((*tp)->next);
        free(p);
    }
}
void display(stk *tp)
{
    if (tp == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        while (tp != NULL)
        {
            printf("%d", tp->data);
            tp = tp->next;
        }
    }
}