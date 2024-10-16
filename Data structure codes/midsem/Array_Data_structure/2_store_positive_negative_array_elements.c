#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, pos_count = 0, neg_count = 0, zero_count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], pos_arr[n], neg_arr[n], zero_arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
        {
            pos_arr[pos_count++] = arr[i];
        }
        else if (arr[i] < 0)
        {
            neg_arr[neg_count++] = arr[i];
        }
        else
        {
            zero_arr[zero_count++] = arr[i];
        }
    }

    printf("Positive elements:\n");
    for (i = 0; i < pos_count; i++)
    {
        printf("%d ", pos_arr[i]);
    }

    printf("\nNegative elements:\n");
    for (i = 0; i < neg_count; i++)
    {
        printf("%d ", neg_arr[i]);
    }

    printf("\nZero elements:\n");
    for (i = 0; i < zero_count; i++)
    {
        printf("%d ", zero_arr[i]);
    }

    return 0;
}
