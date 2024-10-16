#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    scanf("%d", &arr[i]);
    for(int i=0; i<n; i++)
    if(arr[i]!=-1)
    printf("%d ", arr[i]);
    printf("\nchild of index 1: %d and %d",arr[2*1+1],arr[2*1+2]);
}
                                                                                    