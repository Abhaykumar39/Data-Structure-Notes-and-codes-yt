#include<stdio.h>
#define max 100
void bubble_sort(int array[],int n)
{ int i,j,temp;
  
 for(i=0;i<(n-1);i++)//for n-1 passes
    {
        for(j=0;j<n-1-i;j++)// the sorted elements not repeat.
        {
            if (array[j]>array[j+1])
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
    printf("\n Enter the size of an array ");
    scanf("%d",&n);
    printf("\n enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    } 
    bubble_sort(array,n);
    
    printf("\n Sorted list in ascending order : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}