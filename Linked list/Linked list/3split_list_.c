#include <stdio.h>
typedef struct linked_list
{
    int data;
    struct linked_list *next;
} li;
void split(li **, li **, int, li **, li **);
void insert(li **, li **);
void display(li *);
int n;
main()
{
    li *l = NULL, *r = NULL, *sl = NULL, *sr = NULL;
    printf("enter total number of elements you want to insert :");
    scanf("%d", &n);
    // printf("enter elements :");
    for (int i = 0; i < n; i++)
    {
        insert(&l, &r);
    }
    int s;
    printf("enter a number from where you want to split list :");
    scanf("%d", &s);
    split(&l, &r, s, &sl, &sr);
    printf("displaying left side after split :");
    display(l);
    printf("displaying right side after split :");
    display(sl);
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
    }
    else
    {
        (*r)->next = p;
        *r = p;
    }
    (*r)->next = NULL;
}
void split(li **l, li **r, int s, li **sl, li **sr)
{
    li *p = *l;
    int i = 1;
    while (i < s)
    {
        p = p->next;
        i++;
    }
    *sl = p->next;
    p->next = NULL;
    *sr = *r;
    *r = p;
}
void display(li *l)
{
    while (l != NULL)
    {
        printf("%d\n", l->data);
        l = l->next;
    }
}