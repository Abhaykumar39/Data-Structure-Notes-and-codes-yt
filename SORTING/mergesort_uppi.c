#include <stdio.h>
void merge(int[], int[], int, int, int);
void merge_sort(int[], int[], int, int);
int main()
{
    int a[30], n, t[30];
    printf("enter number of element :");
    scanf("%d", &n);
    printf("enter elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    merge_sort(a, t, 0, n - 1);
    printf("after merge sort \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;                                                                           
}
void merge_sort(int a[], int t[], int lb, int ub)
{
    int mid = 0;
    if (lb < ub)
    {
        mid = (lb + ub) / 2;
        // printf("before first recursive call and passing lb=%d,ub=%d,mid=%d\n", lb, ub, mid);
        merge_sort(a, t, lb, mid);
        // printf("after first and before second recursive call lb=%d,ub=%d,mid=%d\n", lb, ub, mid);
        merge_sort(a, t, mid + 1, ub);
        // printf("after second and before merge recursive call lb=%d,ub=%d,mid=%d\n", lb, ub, mid);
        merge(a, t, lb, mid, ub); 
        // printf("after merge lb=%d,ub=%d,mid=%d\n", lb, ub, mid);
    }
    // printf("returning..\n");
}
void merge(int a[], int t[], int lb, int mid, int ub)
{
    int k = lb, le = mid, i;
    // printf("in merge lb=%d,ub=%d,mid=%d\n", lb, ub, mid);
    while (lb <= le && mid + 1 <= ub)
    {
        if (a[lb] < a[mid + 1])
        {
            t[k] = a[lb];
            lb++;
            k++;
        }
        else
        {
            t[k] = a[mid + 1];
            mid++;
            k++;
        }
    }
    while (lb <= le)
    {
        t[k] = a[lb];
        lb++;
        k++;
    }
    while (mid + 1 <= ub)
    {
        t[k] = a[mid + 1];
        mid++;
        k++;
    }
    for (i = 0; i <= ub; i++)
    {
        a[i] = t[i];
    }
}