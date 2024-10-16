#include <stdio.h>
int main()
{
    int N, i, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Before swapping:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < N / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[N - 1 - i];
        arr[N - 1 - i] = temp;
    }
    printf("After swapping:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}