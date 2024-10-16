#include <stdio.h>
#include <stdlib.h>

// Define a node structure for the linked list
struct Node
{
    int data;
    struct Node *next;
};

// Function to insert a new node at the right-hand side of the list
struct Node *insertAtEnd(struct Node *head, int data)
{
    // Create a new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    // If the list is empty, set the new node as the head
    if (head == NULL)
    {
        head = newNode;
        return head;
    }

    // Traverse to the end of the list
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Set the new node as the last node in the list
    temp->next = newNode;
    return head;
}

// Function to display the linked list
void displayList(struct Node *head)
{
    if (head == NULL)
    {
        printf("The list is empty.\n");
        return;
    }
    printf("The linked list is: ");
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Main function
int main()
{
    struct Node *head = NULL;

    // Insert nodes at the right-hand side of the list
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    head = insertAtEnd(head, 40);
    head = insertAtEnd(head, 50);

    // Display the linked list
    displayList(head);

    return 0;
}
