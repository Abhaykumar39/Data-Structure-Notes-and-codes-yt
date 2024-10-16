#include<stdio.h>
#define max 100
void selection_sort(int array[],int n)
{ int i,j,min=0,temp;
  
 for(i=0;i<(n-1);i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if (array[min]>array[j])
            {
                min=j;
            }
        }
        temp=array[min];
        array[min]=array[i];
        array[i]=temp;
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
    selection_sort(array,n);
    
    printf("\n Sorted list in ascending order : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}