#include <stdio.h>
int main()
{
    int N, i, d, ap = 1;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter the elements of the array: ");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    // calculate the common difference
    d = arr[1] - arr[0];

    // check if the remaining elements are in AP or not
    for (i = 2; i < N; i++)
    {
        if (arr[i] != arr[i - 1] + d)
        {
            ap = 0; // not in AP
            break;
        }
    }

    // print the result
    if (ap)
    {
        printf("The given sequence of elements is in AP with common difference %d.\n", d);
    }
    else
    {
        printf("The given sequence of elements is not in AP.\n");
    }

    return 0;
}
