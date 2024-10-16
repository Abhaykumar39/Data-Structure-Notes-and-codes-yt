#include<stdio.h>
int main()
{
   int arr[8],i;
    printf("enter the elements ");
    for(i=0;i<8;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<8;i++)
    {
        if(i%2!=0)
        {
            arr[i]=arr[i]*2;
        }
        else{
           arr[i]=arr[i]+10;
        }
        printf("%d ",arr[i]);
    }
}