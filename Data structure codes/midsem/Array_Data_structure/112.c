#include <stdio.h>
#include <stdlib.h>

typedef struct linkedlist
{
    int data;
    struct linkedlist *next;
} ll;

void posLinked(ll **, int);
void negLinked(ll **, int);
void displayPos(ll *);
void displayNeg(ll *);

int main()
{
    ll *L = NULL, *R = NULL;
    int ch, x;

    while (1)
    {
        ll *P = (ll *)malloc(sizeof(ll));
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

        printf("Do you want to continue? (1 for Yes, 0 for No): ");
        scanf("%d", &ch);

        if (ch != 1)
            break;
    }
    ll *posHead = NULL, *posTail = NULL, *negHead = NULL, *negTail = NULL;
    while (L != NULL)
    {
        if (L->data > 0)
        {
            x = L->data;
            posLinked(&posTail, x);
            if (posHead == NULL)
                posHead = posTail;
        }
        else if (L->data < 0)
        {
            x = L->data;
            negLinked(&negTail, x);
            if (negHead == NULL)
                negHead = negTail;
        }
        L = L->next;
    }

    printf("Positive List: ");
    displayPos(posHead);

    printf("Negative List: ");
    displayNeg(negHead);

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
    (*Q1)->next = NULL;
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
    (*V1)->next = NULL;
}

void displayPos(ll *Q)
{
    if (Q == NULL)
    {
        printf("Empty\n");
        return;
    }

    while (Q != NULL)
    {
        printf("%d ", Q->data);
        Q = Q->next;
    }
    printf("\n");
}

void displayNeg(ll *V)
{
    if (V == NULL)
    {
        printf("Empty\n");
        return;
    }

    while (V != NULL)
    {
        printf("%d ", V->data);
        V = V->next;
    }
    printf("\n");
}
