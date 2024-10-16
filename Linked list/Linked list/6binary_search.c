#include <stdio.h>
typedef struct linkedlist
{
    int data;
    struct linkedlist *next;
} li;
void insert(li **, li **);
int bisearch(li *, int);
int n;
main()
{
    li *l = NULL, *r = NULL;
    int key, f;
    printf("enter number of elements :");
    scanf("%d", &n);
    printf("enter elements in ascending order :");
    for (int i = 0; i < n; i++)
    {
        insert(&l, &r);
    }
    printf("enter element you want to search :");
    scanf("%d", &key);
    f = bisearch(l, key);
    if (f != 0)
    {
        printf("choice found ");
    }
    else
    {
        printf("choice not found");
    }
}
void insert(li **l, li **r)
{
    li *p = NULL;
    p = (li *)malloc(sizeof(li));
    int x;
    printf("enter number :");
    scanf("%d", &x);
    p->data = x;
    if (*l == NULL)
    {
        *l = *r = p;
    }
    else
    {
        (*r)->next = p;
        *r = p;
    }
    (*r)->next = NULL;
}
int bisearch(li *l, int key)
{
    int lb = 1, ub = n, mid;
    li *p = NULL;
    while (lb <= ub)
    {
        p = l;
        mid = (lb + ub) / 2;
        int a = 1;
        while (a != mid)
        {
            p = p->next;
            a++;
        }
        if (p->data == key)
            return 1;
        else if (p->data < key)
            ub = mid - 1;
        else
            lb = mid + 1;
    }
    return 0;
}