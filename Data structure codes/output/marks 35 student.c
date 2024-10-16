#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter the marks of student: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        if (arr[i]<35)
        {
            printf("%d ",i);
        }
    }
}