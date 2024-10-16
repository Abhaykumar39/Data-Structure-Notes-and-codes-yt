#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
void push(node **top)
{
    int x;
    node *p = NULL;
    p = (node *)malloc(sizeof(node));
    if (p == NULL)
    {
        printf("no memory allocated ");
    }
    else
    {
        printf("\n enter the value ");
        scanf("%d", &x);
        p->data = x;
        p->next = *top;
        *top = p;
    }
}
void pop(node **top)
{
    if (*top == NULL)
    {
        printf("stack underflow ");
    }
    else
    {
        node *p;
        p = *top;
        printf("the popped element is: %d", (*top)->data);
        *top = (*top)->next;
        free(p);
    }
}
void display(node *top)
{
    node *temp;
    if (top == NULL)
    {
        printf("no elements in stack to display");
    }
    else
    {
        printf("/n the display elements are :");
        temp = top;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}
void peek(node *top)
{
    if (top == NULL)
    {
        printf("no elements to peak");
    }
    else
    {
        printf("/n the peek elements is :%d", top->data);
    }
}
int main()
{
    node *top = NULL;
    int ch;
    do
    {
        printf("\n1.Push\n2.pop\n3.display\n4.peek\n5.exit");
        printf("\n enter your choice ");
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

        case 4:
            peek(top);
            break;

        case 5:
            exit(0);

        default:
            printf("\ninvalid choice");
        }
    } while (ch <= 5);
}