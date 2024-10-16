 #include <stdio.h>
#include <stdlib.h>

// Define a node struct for the linked list
struct Node {
    int data;
    struct Node* next;
};

int countNodes(struct Node* s) {
    int count = 0;
    struct Node* current = s;
    
    // Traverse the list and increment the count for each node
    while (current != NULL) {
        count++;
        current = current->next;
    }
    
    return count;
}
