#include <stdio.h>
#define max 10
void insertion(int array[], int n)
{
    int i, j, t = 0;
    for (i = 1; i < n; i++)
    {
        t = array[i];
        j = i - 1;
        while (j >= 0 && t < array[j])
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j+1] = t;
    }
}
int main()
{
    int array[max], n, i;
    printf("enter the size of array ");
    scanf("%d", &n);
    printf("enter the elemnet : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    insertion(array, n);

    printf("the sorted element is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d", array[i]);
    }
}