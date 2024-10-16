#include<stdio.h>
#define max 100
void insertionsort(int array[],int n)
{
    int i,j,t=0;
    for(i=1;i<n;i++)
    {
        t=array[i];
        j=i-1;
    
    while(j>=0 && t<array[j])
    {
        array[j+1]=array[j];
        j--;
    }
    array[j+1]=t;
    }
}
int main()
{
    int array[max],n,i;
    printf("\n Enter the size of an array ");
    scanf("%d",&n);
    printf("\n enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

   insertionsort(array,n);
    
     printf("\n Sorted list in ascending order : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}