#include<stdio.h>
int recur(int n)
{
    if(n==0)
    return 0;
    int sum;
    sum=n+recur(n-1);
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",recur(n));
}