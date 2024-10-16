#include <stdio.h>
typedef struct linked_list
{
    int data;
    struct linked_list *next;
} li;
void insert(li **, li **);
int lisearch(li *, int);
int n;
main()
{
    li *l = NULL, *r = NULL;
    int num;
    printf("enter total number of elements :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        insert(&l, &r);
    }
    printf("enter the number you want to search :");
    scanf("%d", &num);
    int f = lisearch(l, num);
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
int lisearch(li *l, int x)
{
    int i = 1;
    while (l != NULL)
    {
        if (l->data == x)
        {
            printf("choice found at node %d\n", i);
            return 1;
        }
        l = l->next;
        i++;
    }
    return 0;
}