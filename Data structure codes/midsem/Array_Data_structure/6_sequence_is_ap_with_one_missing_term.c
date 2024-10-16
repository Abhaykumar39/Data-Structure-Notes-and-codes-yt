#include <stdio.h>
int main()
{
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int common_diff;
    if (N >= 3)
    {
        common_diff = (arr[N - 1] - arr[0]) / N; // calculate common difference
    }
    else
    {                                          
        printf("The given sequence is not a valid AP.\n");
        return 0;
    }

    int missing_term;
    for (int i = 0; i < N - 1; i++)
    {
        if (arr[i + 1] - arr[i] != common_diff)
        {
            missing_term = arr[i] + common_diff;
            printf("The given sequence is an AP with a missing term.\n");
            printf("The missing term is %d.\n", missing_term);
            printf("The series including the missing term is:\n");
            for (int j = 0; j < N; j++)
            {
                printf("%d ", arr[0] + j * common_diff);
                if (j == i)
                {
                    printf("%d ", missing_term);
                }
            }
            printf("\n");
            return 0;
        }
    }

    printf("The given sequence is an AP with no missing terms.\n");
    printf("The common difference is %d.\n", common_diff);
    printf("The series is:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[0] + i * common_diff);
    }
    printf("\n");

    return 0;
}
