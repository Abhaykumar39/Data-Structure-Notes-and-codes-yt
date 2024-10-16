#include <stdio.h>
#include <stdlib.h>

// Define a node struct for the linked list
struct Node {
    int data;
    struct Node* next;
};

void insertBeforeLastNode(struct Node* p, int newData) {
    // Create a new node to be inserted
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = NULL;
    
    // If the list is empty, insert the new node as the first node
    if (p == NULL) {
        p = newNode;
        return;
    }
    
    // If the list has only one node, insert the new node before it
    if (p->next == NULL) {
        newNode->next = p;
        p = newNode;
        return;
    }
    
    // Traverse the list to find the second-to-last node
    struct Node* secondToLast = p;
    while (secondToLast->next->next != NULL) {
        secondToLast = secondToLast->next;
    }
    
    // Insert the new node before the last node
    newNode->next = secondToLast->next;
    secondToLast->next = newNode;
}
