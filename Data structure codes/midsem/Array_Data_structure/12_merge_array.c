#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], C[MAX_SIZE * 2][MAX_SIZE];
    int n, m, i, j, k;

    // Input sizes of A and B
    printf("Enter number of rows and columns of A and B: ");
    scanf("%d%d", &n, &m);

    // Input elements of A
    printf("Enter elements of A:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements of B
    printf("Enter elements of B:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Merge arrays A and B into array C
    i = j = k = 0;
    while (i < n && j < m)
    {
        if (A[i][0] < B[j][0])
        {
            for (int l = 0; l < m; l++)
                C[k][l] = A[i][l];
            i++;
        }
        else
        {
            for (int l = 0; l < m; l++)
                C[k][l] = B[j][l];
            j++;
        }
        k++;
    }

    while (i < n)
    {
        for (int l = 0; l < m; l++)
            C[k][l] = A[i][l];
        i++;
        k++;
    }

    while (j < m)
    {
        for (int l = 0; l < m; l++)
            C[k][l] = B[j][l];
        j++;
        k++;
    }

    // Print sorted array C
    printf("\nSorted array C:\n");
    for (i = 0; i < n * 2; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
