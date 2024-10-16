#include<stdio.h>
int recur(int n)
{
    if(n==0)
    return 0;
    if(n%2!=0)
    {
        return n+recur(n-1);
    }
    else
    {
        recur(n-1);
    }

}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", recur(n));
}