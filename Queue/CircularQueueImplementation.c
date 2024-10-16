#include <stdio.h>
#define max 10
int cenque(int[], int, int);
int cdeque(int[], int, int);
void display(int[], int , int);
int main()
{
    int queue[max], ch, f = -1, r = -1;
    do
    {
        printf("\n1. cenque\n 2.cdeque\n 3.display\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            r = cenque(queue, f, r);
            if (f == -1)
            {
                f = 0;
            }
            break;

        case 2:
            f = cdeque(queue, f, r);
            if (f == -1)
            {
                r = -1;
            }
            break;
        case 3:
            display(queue, f, r);
            break;
        }
    } while (ch <= 3);
}
int cenque(int queue[], int f, int r)
{
    int x;
    if ((r + 1) % max == f)
    {
        printf("queue is full\n");
    }
    else
    {
        printf("enter the elements: ");
        scanf("%d", &x);
        r = (r + 1) % max;
        queue[r] = x;
    }
    return r;
}
int cdeque(int queue[], int f, int r)
{
    int z;
    if (f == -1)
    {
        printf("queue is empty\n");
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
            f = (f + 1) % max;
        }
    }
    return f;
}
void display(int queue[], int f, int r)
{
    if (f == -1)
    {
        printf("queue is empty ");
    }
    else
    {
        while (f!=r)
        {
            printf("%d ", queue[f]);
            f = (f + 1) % max;
        }
    }
}
