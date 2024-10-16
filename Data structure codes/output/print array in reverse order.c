#include <stdio.h>
int main()
{
    int arr[4];
    printf("enter the elememts ");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d ", arr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 4; i >= 0; i--)
    {

        printf("%d ", arr[i]);
    }
}