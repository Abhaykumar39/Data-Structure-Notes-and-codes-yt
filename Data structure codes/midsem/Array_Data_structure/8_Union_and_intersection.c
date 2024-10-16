#include <stdio.h>
int main()
{
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    int A[N], B[N], C[2 * N], D[N];
    printf("Enter %d elements for Array A:\n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter %d elements for Array B:\n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &B[i]);
    }

    int k = 0;
    for (int i = 0; i < N; i++)
    {
        int found = 0;
        for (int j = 0; j < k; j++)
        {
            if (A[i] == C[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            C[k] = A[i];
            k++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        int found = 0;
        for (int j = 0; j < k; j++)
        {
            if (B[i] == C[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            C[k] = B[i];
            k++;
        }
    }

    printf("The union of the given arrays is:\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", C[i]);
    }
    printf("\n");
    int l = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (A[i] == B[j])
            {
                int found = 0;
                for (int m = 0; m < l; m++)
                {
                    if (A[i] == D[m])
                    {
                        found = 1;
                        break;
                    }
                }
                if (!found)
                {
                    D[l] = A[i];
                    l++;
                }
            }
        }
    }

    printf("The intersection of the given arrays is:\n");
    for (int i = 0; i < l; i++)
    {
        printf("%d ", D[i]);
    }
    printf("\n");

    return 0;
}
