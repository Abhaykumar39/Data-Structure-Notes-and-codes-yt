#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *enqueue(node *rear)
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
        printf("enter the element ");
        scanf("%d", &x);
        p->data = x;
        if (rear == NULL)
        {
            rear = p;
        }
        else
        {
            rear->next = p;
            rear = p;
        }
    }
    rear->next = NULL;
    return rear;
}
node *dequeue(node *rear, node *front)
{
    node *p = NULL;
    if (front == NULL)
    {
        printf("queue underflow");
    }
    else
    {
        p = front;
        printf("%d ", p->data);
        front = front->next;
        free(p);
    }
    return front;
}
void display(node *front)
{
    node *temp;
    if (front == NULL)
    {
        printf("queue underflow");
    }
    else
    {
        temp = front;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}
void peek(node *front)
{
    if (front == NULL)
    {
        printf("stack underflow");
    }
    else
    {
        printf("%d", front->data);
    }
}
int main()
{
    node *rear = NULL, *front = NULL;
    int ch;
    do
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.display\n4.peek\n5.exit");
        printf("\n enter your choice ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            rear = enqueue(rear);
            if (front == NULL)
            {
                front = rear;
            }
            break;
        case 2:
            front = dequeue(rear, front);
            if (front == NULL)
            {
                rear = NULL;
            }
            break;

        case 3:
            display(front);
            break;

        case 4:
            peek(front);
            break;

        case 5:
            exit(0);

        default:
            printf("\ninvalid choice");
        }
    } while (ch <= 5);
}