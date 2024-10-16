#include<stdio.h>
#define max 10
int bisearch(int[],int,int,int);
int main()
{
    int a[max],ub,lb,f,i,N,key;
    printf("enter total number of elements");
    scanf("%d",&N);
    printf("enter elements in ascending order");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element your want to search");
    scanf("%d",&key);
    lb=0;
    ub=N;
    f=bisearch(a,lb,ub,key);
    if (f==1)
    {
        printf("key found");
    }
    else{
        printf("key not found");
    }
}
int bisearch(int a[],int lb,int ub,int key)
{
    int mid;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(a[mid]==key)
        {
            return 1;
        }
        else if(a[mid]<key){
            ub=mid-1;
        }
        else{
            lb=mid+1;
        }
    }
     return 0;
}