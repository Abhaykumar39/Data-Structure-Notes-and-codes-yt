#include<stdio.h>
int main()
{
    int a[100],n,i,counteven=0,countodd=0;
    printf("enter the size of array ");
    scanf("%d",&n);
    printf("enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0) 
        {
            printf("%d is even\n",a[i]);
            counteven++;   
        }
        else
        {
            printf("%d is odd\n",a[i]);
            countodd++; 
        }
            
    }
    printf("\ncount of even: %d ",counteven);
    printf("\ncount of odd: %d ",countodd);
}