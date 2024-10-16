#include <stdio.h>
#define max 10
void lisearch(int[], int, int);
int main()
{
    int key, i, N, a[max];
    printf("enter elements in array : ");
    scanf("%d", &N);
    printf("enter elements in array : ");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter element you want to find ");
    scanf("%d", &key);
    lisearch(a, N, key);
}

void lisearch(int a[], int N, int key)
{
    int f=0;
    for (int i = 0; i < N; i++)
    {
        if (a[i] == key)
        {
            printf("choice found at index : %d",i);
            f=1;
            break;
        }
    }
    if(f==0)
    printf("element not found");
}