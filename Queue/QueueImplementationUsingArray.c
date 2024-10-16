#include <stdio.h>
#include <stdlib.h>
#define max 10
int enque(int[], int);
int deque(int[], int, int);
void display(int[], int, int);
void peak(int[], int);
int main()
{
    int queue[max], ch, f = -1, r = -1;
    do
    {
        printf("\n 1.Enqueue \n2.Dequeue \n3.Display \n4.peak \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            r = enque(queue, r);
            if (f == -1)
            {
                f = 0;
            }
            break;

        case 2:
            f = deque(queue, r, f);
            if (f == -1)
                r = -1;
            break;

        case 3:
            display(queue, r, f);
            break;

        case 4:
            peak(queue, f);
            break;
        }
    } while (ch <= 4);
}
int enque(int queue[], int r)
{
    int x;
    if (r == max - 1)
    {
        printf("queue is full");
    }
    else
    {
        printf("enter the elements ");
        scanf("%d", &x);
        r++;
        queue[r] = x;
    }
    return (r);
}
int deque(int queue[], int f, int r)
{
    int z;
    if (f == -1 && r == -1)
    {
        printf("queue is empty");
    }
    else
    {
        z = queue[f];
        printf("%d", z);
        if (f == r)
        {
            f = -1;
        }
        else
        {
            f++;
        }
        return (f);
    }
}
void display(int queue[], int r, int f)
{
    if (f == -1 && r == -1)
    {
        printf("queue is empty");
    }
    else
    {
        while (f <= r)
        {
            printf("%d", queue[f]);
            f++;
        }
    }
}
void peak(int queue[], int f)
{
    if (f == -1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("%d", queue[f]);
    }
}