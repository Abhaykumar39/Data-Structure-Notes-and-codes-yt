#include<stdio.h>
int main()
{
    int arr[5],i;
    int min=arr[0];
    printf("enter the elements ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
 for(i=0;i<5;i++)
 {
    if (min>arr[i])
    {
        min=arr[i];
    }
 }
    printf("%d ",min);
}