#include <stdio.h>
#include<stdlib.h>
typedef struct linked_list
{
    int data;
    struct linked_list *next;
} li;
void insert(li **, li **);
void displayinrev(li *);
int n;
 int main()
{
    li *l = NULL, *r = NULL;
    printf("enter total number of elements you want to insert :");
    scanf("%d", &n);
                       for (int i = 0; i < n; i++)
    {
        insert(&l, &r);
    }
    printf("displaying single linked list in reverse :");
    displayinrev(l);
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
void displayinrev(li *l)
{
    if (l == NULL)
    {
        return;
    }
    displayinrev(l->next);
    printf("%d\n", l->data);
}