struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// Assume we have the following pointers to nodes:
struct Node* P;
struct Node* Q;
struct Node* R;
struct Node* S;
struct Node* T;

// Insert a new node between nodes pointed to by R and S:
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = newData;
newNode->prev = R;
newNode->next = S;
R->next = newNode;
S->prev = newNode;
