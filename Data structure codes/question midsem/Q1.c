#include <stdio.h>
struct Node
{
    int data;
    struct Node *next;
};
void printDissimilarNodes(struct Node *p, struct Node *q)
{
    struct Node *curr1 = p;
    struct Node *curr2 = q;

    while (curr1 != NULL && curr2 != NULL)
    {
        if (curr1->data != curr2->data)
        {
            printf("%d ", curr1->data);
            printf("%d ", curr2->data);
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }

    while (curr1 != NULL)
    {
        printf("%d ", curr1->data);
        curr1 = curr1->next;
    }

    while (curr2 != NULL)
    {
        printf("%d ", curr2->data);
        curr2 = curr2->next;
    }
}

int main()
{
    // Create two linked lists
    struct Node *p = NULL;
    struct Node *q = NULL;
    struct Node *temp;

    p = (struct Node *)malloc(sizeof(struct Node));
    p->data = 1;
    p->next = (struct Node *)malloc(sizeof(struct Node));
    p->next->data = 2;
    p->next->next = (struct Node *)malloc(sizeof(struct Node));
    p->next->next->data = 3;
    p->next->next->next = NULL;

    q = (struct Node *)malloc(sizeof(struct Node));
    q->data = 1;
    q->next = (struct Node *)malloc(sizeof(struct Node));
    q->next->data = 4;
    q->next->next = (struct Node *)malloc(sizeof(struct Node));
    q->next->next->data = 5;
    q->next->next->next = NULL;

    // Call the function to print dissimilar nodes
    printDissimilarNodes(p, q);

    return 0;
}
