// sparse matrices --- A sparse matrix is a special case of a matrix in which the number of zero elements is much higher than the number of non-zero elements.

#include <stdio.h>
int main()
{
    int sparse[30][30], rows, col, i, j, nonzero = 0, triplet[50][3], temp = 1;
    printf("enter the number of rows");
    scanf("%d", &rows);
    printf("enter the number of columns");
    scanf("%d", &col);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < col; j++)
        {
            
            scanf("%d", &sparse[i][j]);
        }
    }
    
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (sparse[i][j] != 0)
            {
                nonzero++;
            }
        }
    }
    // convert for triplet matrix
    triplet[0][1] = rows;
    triplet[0][2] = col;
    triplet[0][3] = nonzero;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (sparse[i][j] != 0)
            {
                sparse[temp][0] = i;
                sparse[temp][1] = j;
                sparse[temp][2] = sparse[i][j];
                temp++;
            }
        }
    }
    // display triplet matrix
    printf(" the triplet matrix are : ");
    for (i = 0; i < nonzero + 1; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", triplet[i][j]);
        }
        printf("\n");
    }
}