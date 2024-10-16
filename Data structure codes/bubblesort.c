#include<stdio.h>
#define max 10
void bubblesort(int array[], int n)
{ int i,j,temp;
   for(i=0;i<n-1;i++)
   {
    for(j=0;j<n-1-i;j++)
    {
        if(array[j]>array[j+1])
        {
             temp=array[j];
             array[j]=array[j+1];
             array[j+1]=temp;
        }
    }
   }
}
int main()
{
    int array[max],n,i;
    printf("enter the size of array ");
    scanf("%d",&n);
    printf("enter the elemnet : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    bubblesort(array,n);
    printf("the sorted element is : ");
    for(i=0;i<n;i++)
    {
        printf("%d",array[i]);
    }
}