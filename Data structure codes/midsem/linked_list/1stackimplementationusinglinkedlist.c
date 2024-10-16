// Linked list is a linear data structure and it consists of nodes where each node contain the data fields and pointer to the next element.
// we create a menu for stack .
// then we include structure of node in which we include the data and *next.
// In push function we can allocate the memory and create a variable x then check condition is p==null no memory allocate.
// then we include p->data=x and p->next=top because it points to null.and then top=p.
// In pop function we check the underflow conition that top==null and node=top and print the poped element.then its points to  next node is that top=top->next .and then return top.
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
        p->next = top;
        top = p;
    }
    return top;
}
node *pop(node *top)
{
    if (top == NULL)
    {
        printf("stack underflow ");
    }
    else
    {
        node *p = top;
        printf("/n the poped element is : %d ", p->data);
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