#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;

} node;
node *Enqueue(node *rear)
{
    int x;
    node *p = (node *)malloc(sizeof(node));
    if (rear == NULL)
    {
        printf("no memory allocation");
    }
    else
    {
        printf("enter the value");
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
        rear->next = NULL;
        return rear;
    }
}
node *dequeue(node *front)
{
    node *p = NULL;
    if (front == NULL)
    {
        printf("queue underflow");
    }
    else
    {
        node *p = front;
        printf("dequeue element is :%d", front->data);
        front = front->next;
    }
    free(p);
    return front;
}
void display(node *front)
{
    node *temp;
    if (front == NULL)
    {
        printf("no elements to display");
    }
    else
    {
        temp = front;
        printf("%d", temp->data);
        temp = temp->next;
    }
}
void peek(node *front)
{
    if (front == NULL)
    {
        printf("no elements to peek");
    }
    else
    {
        printf("%d", front->data);
    }
}
