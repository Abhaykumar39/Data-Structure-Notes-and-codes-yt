// recursve function - the function which call itself.
#include<stdio.h>
void recur(int n)
{
    if(n==0)
     return;
        printf("%d",n);
        recur(n-1);
}
int main()
{
  int n;
  scanf("%d",&n);
  recur(n);
}