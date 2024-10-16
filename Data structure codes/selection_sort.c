#include<stdio.h>
#define max 10
void selection(int array[], int n)
{
    int i,j,min=0,pos=0;
    for(i=0;i<n-1;i++)
    {
        min=array[i];
        pos=i;
    }
    for(j=i+1;j<n;j++)
    {
        min=array[j];
        pos=j;
    }
    if(pos!=i)
    {
        array[pos]=array[i];
        array[i]=min;
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
    selection(array,n);

    printf("the sorted element is : ");
    for(i=0;i<n;i++)
    {
        printf("%d",array[i]);
    }
}