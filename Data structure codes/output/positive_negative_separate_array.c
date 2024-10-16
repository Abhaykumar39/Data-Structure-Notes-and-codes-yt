#include <stdio.h>
int main()
{
    int  i,n;
    printf("enter the size of array ");
    scanf("%d", &n);
    int a[n];
    printf("enter the elementsof array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("positive numbers: ");
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
            printf("%d ", a[i]);
    }
    printf("negative numbers: ");
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
            printf("%d ", a[i]);
    }
}