#include <stdio.h>
#include <stdlib.h>
#define max 10
void enqueue(int *queue, int *rear)
{
    int x;
    if (*rear == max - 1)
    {
        printf("\n Queue Overflow ");
    }
    else
    {
        printf("\n Enter the element: ");
        scanf("%d", &x);
        queue[++(*rear)] = x;
    }
}
int dequeue(int *queue, int *front, int *rear)
{
    if (*front == -1 && *rear == -1)
    {
        printf("\n Queue underflow");
    }
    else
    {
        printf("the dequeue element is : %d", queue[*front]);
        if (*front == *rear)
        {
            *front = -1;
        }
        else
        {
            (*front)++;
        }
    }
}
void display(int *queue, int *front, int *rear)
{
    if (*front == -1)
    {
        printf("\n No elements in queue");
        return;
    }
    printf("the elements are: ");
    for (int i = (*front); i <= (*rear); i++)
        printf("%d ", queue[i]);
}
void peek(int *queue, int *front)
{
    if (*front == -1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("peak element: %d", queue[*front]);
    }
}

int main()
{
    int ch, queue[max], front = -1, rear = -1;

    do
    {
        printf("\nmenu: \n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.PEEK\n5.exit\n");
        printf("\n Enter your Choice : ");
        
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue(&queue[0], &rear);
            if (front == -1)
            {
                front = 0;
            }
            break;

        case 2:
            dequeue(&queue[0], &front, &rear);
            if (front == -1)
            {
                rear = -1;
            }
            break;

        case 3:
            display(&queue[0], &front, &rear);
            break;

        case 4:
            peek(&queue[0], &front);
            break;

        case 5:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    } while (ch != 5);
}
