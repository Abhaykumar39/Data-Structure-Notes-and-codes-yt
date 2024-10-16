#include <stdio.h>

// Define a node struct for the linked list
struct Node {
    int data;
    struct Node* next;
};

void printEvenNodes(struct Node* PTR) {
    while (PTR != NULL) {
        // Check if the data in the current node is even
        if (PTR->data % 2 == 0) {
            printf("%d ", PTR->data);
        }
        // Move to the next node in the list
        PTR = PTR->next;
    }
}
