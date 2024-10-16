#include <stdio.h>
#include <stdlib.h>
typedef struct linkedlist
{
    int data;
    struct linkedlist *next;
} ll;
void posLinked(ll **, int);
void negLinked(ll **, int);
int main()
{
    ll *L = NULL, *R = NULL, *P = NULL, *Q = NULL, *V = NULL;
    int ch, x;
    while (1)
    {
        P = (ll *)malloc(sizeof(ll));
        if (P != NULL)
        {
            printf("Enter the value: ");
            scanf("%d", &P->data);
            if (L == NULL && R == NULL)
            {
                L = R = P;
            }
            else
            {
                R->next = P;
                R = P;
            }
            R->next = NULL;
        }
        printf("Do you want to continue: ");
        scanf("%d", &ch);
        if (ch != 1)
            break;
    }
    while (L != NULL)
    {
        if (L->data > 0)
        {
            x = L->data;
            posLinked(&Q, x);
        }
        else if (L->data < 0)
        {
            x = L->data;
            negLinked(&V, x);
        }
        L = L->next;
    }
    return 0;
}
void posLinked(ll **Q1, int X)
{
    ll *P = NULL;
    P = (ll *)malloc(sizeof(ll));
    if (P != NULL)
    {
        P->data = X;
        if (*Q1 == NULL)
        {
            *Q1 = P;
        }
        else
        {
            (*Q1)->next = P;
            *Q1 = P;
        }
    }
}
void negLinked(ll **V1, int X)
{
    ll *P = NULL;
    P = (ll *)malloc(sizeof(ll));
    if (P != NULL)
    {
        P->data = X;
        if (*V1 == NULL)
        {
            *V1 = P;
        }
        else
        {
            (*V1)->next = P;
            *V1 = P;
        }
    }
}