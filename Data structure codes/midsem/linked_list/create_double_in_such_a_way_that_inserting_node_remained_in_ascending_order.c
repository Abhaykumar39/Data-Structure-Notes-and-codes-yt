#include <stdio.h>
#include <stdlib.h>

// Node structure for the doubly linked list
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to insert a node in the doubly linked list in ascending order
void insertNode(struct Node** head_ref, int data) {
    // Allocate memory for new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = NULL;
    
    // Case 1: If the doubly linked list is empty, make the new node the head
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    
    // Case 2: If the new node's data is smaller than the current head node's data, make the new node the head
    if (data < (*head_ref)->data) {
        (*head_ref)->prev = new_node;
        new_node->next = *head_ref;
        *head_ref = new_node;
        return;
    }
    
    // Case 3: Traverse the doubly linked list to find the correct position to insert the new node in ascending order
    struct Node* current = *head_ref;
    while (current->next != NULL && current->next->data < data) {
        current = current->next;
    }
    
    // Case 4: Insert the new node in between two existing nodes or at the end of the doubly linked list
    new_node->prev = current;
    new_node->next = current->next;
    if (current->next != NULL) {
        current->next->prev = new_node;
    }
    current->next = new_node;
}

// Function to print the doubly linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int choice, data;
    do {
        printf("1. Insert node\n");
        printf("2. Print list\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insertNode(&head, data);
                break;
            case 2:
                printf("List: ");
                printList(head);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 3);
    return 0;
}
