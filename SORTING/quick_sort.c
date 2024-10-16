#include <stdio.h>
#define max 50
int main()
{
    int a[max], n;
    printf("enter total number of elements");
    scanf("%d", &n);
    printf("enter elements in array");
    for (int i; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}
void quicksort(int a[], int lb, int ub)
{
    int i = lb, j = ub, key = a[lb], temp = 0;
    if (lb >= ub)
        return;
    while (i < j)
    {
        while (key >= a[i] && i < j)
            i++;
        while (key < a[j])
            j--;
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    a[lb] = a[j];
    a[j] = key;
    quicksort(a, lb, j - 1);
    quicksort(a, j + 1, ub);
}