#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *push(node *top)
{
    int x;
    node *p = NULL;
    p = (node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        printf("no memory allocation ");
    }
    else
    {
        printf("enter the element");
        scanf("%d", &x);
        p->data = x;
        p->next = top;
        top = p;
    }
    return top;
}
node *pop(node *top)
{
    node *p = NULL;
    if (top == NULL)
    {
        printf("stack underflow");
    }
    else
    {
        p = top;
        printf("%d", p->data);
        top = top->next;
        free(p);
    }
    return top;
}
void display(node *top)
{
    node *temp;
    if (top == NULL)
    {
        printf("no elements to display");
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
            printf("%d", temp->data);
            temp = temp->next;
        }
    }
}
void peek(node *top)
{
    if (top == NULL)
    {
        printf("no elements to peek");
    }
    else
    {
        printf("%d", top->data);
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
            top = push(top);
            break;

        case 2:
            top = pop(top);
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