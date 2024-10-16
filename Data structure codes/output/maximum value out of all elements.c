#include<stdio.h>
int main()
{
    int arr[5],i;
    int max=arr[0];
    printf("enter the elements ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
 for(i=0;i<5;i++)
 {
    if (max<arr[i])
    {
        max=arr[i];
    }
 }
    printf("%d ",max);
}