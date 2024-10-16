#include <stdio.h>
int main()
{
    int arr[2], i, product=1;
    printf("enter the number ");
    for (i = 0; i < 2; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 2; i++)
    {
        product = product * arr[i];
    }
printf("%d\n",product);
}