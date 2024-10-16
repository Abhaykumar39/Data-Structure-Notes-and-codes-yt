#include <stdio.h>
int main()
{
    int N, count;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    int A[N];
    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++)
    {
        count = 0;
        for (int j = 0; j < N; j++)
        {
            if (A[i] == A[j] && i != j)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            for (int j = i + 1; j < N; j++)
            {
                count = 0;
                for (int k = 0; k < N; k++)
                {
                    if (A[j] == A[k] && j != k)
                    {
                        count++;
                        break;
                    }
                }
                if (count == 0)
                {
                    for (int k = j + 1; k < N; k++)
                    {
                        count = 0;
                        for (int m = 0; m < N; m++)
                        {
                            if (A[k] == A[m] && k != m)
                            {
                                count++;
                                break;
                            }
                        }
                        if (count == 0)
                        {
                            for (int m = k + 1; m < N; m++)
                            {
                                count = 0;
                                for (int n = 0; n < N; n++)
                                {
                                    if (A[m] == A[n] && m != n)
                                    {
                                        count++;
                                        break;
                                    }
                                }
                                if (count == 0)
                                {
                                    printf("The 4th non-repeating element in the array is %d.\n", A[m]);
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    printf("There is no 4th non-repeating element in the array.\n");
    return 0;
}
