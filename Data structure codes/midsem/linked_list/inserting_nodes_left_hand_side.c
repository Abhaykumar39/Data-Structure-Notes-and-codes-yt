#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *newnode = NULL;
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        // Create a new node
        newnode = (struct node*)malloc(sizeof(struct node));

        // Input data of new node
        printf("Enter the data of node %d: ", i+1);
        scanf("%d", &newnode->data);

        // Link the new node to the head of the linked list
        newnode->next = head;
        head = newnode;
    }

    // Traverse the linked list and print its elements
    printf("\nThe linked list is:\n");
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
