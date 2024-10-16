#include <stdio.h>
void number(int a[100], int n);
int main()
{
    int a[100], i, n;
    printf("enter size of  array");
    scanf("%d", &n);
    printf("enter the elements in array");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    number(a, n);
}
void number(int a[100], int n)
{
    int e = 0, o = 0, i;
    for (i = 0; i < n; i++)
        if (a[i] % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    printf("number of odd elements :%d", o);
    printf("number of even elements :%d", e);
}