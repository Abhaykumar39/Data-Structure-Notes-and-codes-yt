#include<stdio.h>
int main()
{
    int arr[5],i,sum=0,fig=0,diff;
    printf("enter the elements ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
       if(i%2==0)
       {
sum=sum+arr[i];
       }
       else 
       {
        fig=fig+arr[i];
       }
       diff=sum-fig;

    }
    
       printf("%d ",diff);

}