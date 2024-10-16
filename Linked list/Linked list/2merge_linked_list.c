#include <stdio.h>
#include<stdlib.h>
typedef struct linked_list
{
    int data;
    struct linked_list *next;
} li;
void mergelist(li **, li **, li **, li **);
void insert(li **, li **);
void display(li *);
main()
{
    li *l = NULL, *r = NULL, *l1 = NULL, *r1 = NULL;
    int n1, n2;
    printf("enter number of elements for list 1 :");
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++)
    {
        insert(&l, &r);
    }
    printf("enter number of elements for list 2 :");
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++)
    {
        insert(&l1, &r1);
    }
    printf("list after merging both list 1 and list 2 :");
    mergelist(&l, &r, &l1, &r1);
    display(l);
}
void insert(li **l, li **r)
{
    li *p = NULL;
    p = (li *)malloc(sizeof(li));
    if (p != NULL)
    {
        int x;
        printf("enter element :");
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
}
void display(li *l)
{
    while (l != NULL)
    {
        printf("%d\n", l->data);
        l = l->next;
    }
}
void mergelist(li **l, li **r, li **l1, li **r1)
{
    // li *p = *l;
    // while (p->next != NULL)
    // {
    //     p = p->next;
    // }
    (*r)->next = *l1;
}