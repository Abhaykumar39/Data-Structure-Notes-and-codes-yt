#include <stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next, *prev;
} node;
node *insert(node *rear)
{
    node *p = NULL;
    int x;
    p = (node *)malloc(sizeof(node));
    if (p == NULL)
    {
        printf("no memory allocated");
    }
    else
    {
        printf("enter the element: ");
        scanf("%d", &x);
        p->data = x;
        if (rear == NULL) // if rear is null, it means that linkedlist is empty, so we will just point rear to the node where p is pointing.
        {
            rear = p;          // rear=p means rear will point to the node where p is pointing right now
            rear->prev = NULL; // we will now make rear previous as null and later rear next to null
        }
        else // it means that there are other nodes in the list
        {
            rear->next = p; // rear next will point to p.                                                                                 
            p->prev = rear; // previous of p will point to rear.
            rear = p;       // now rear will point to the new node which is also the end of the linkedlist.
        }
        rear->next = NULL;
        return rear;
    }
}
node *delete(node *front)
{
    if (front == NULL) // if front is empty, it means that linkedlis is empty. 
    {
        printf("linkedlist is empty");
        return front;
    }
    int x;
    printf("enter the value to delete: ");
    scanf("%d", &x);      
    if (front->data == x)
    {
        // it means the front value is to be deleted, so we only need to forward the front pointer
        if (front->next == NULL) // this means that we have a single node in our linkedlist, so we will just make the front null and return it
        {                                                                                                                                                                                                                    
            front = NULL;
        }
        else
        { // this means that we have other nodes after front node
            node *p = front;
            front = front->next; // front points to next node now
            front->prev = NULL;  // front previous will become null so that it won't have any connection with p now
            free(p);             // free p to save memory
        }
    }
    else
    {
        // since our first node not to be deleted, we will traverse the doubly linkedlist and check for x
        node *temp = front;
        while (temp->data != x && temp->next != NULL)
            temp = temp->next;
        if (temp->next != NULL)
        {
            // in this case, we are somewhere in the middle of the linkedlist
            // here we will delete the temp by changing the value in the previous and next pointers of temp
            // to do that we change the next of previous pointer to next of temp
            // and prev of next to prev of temp
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            free(temp);
        }
        else if (temp->next == NULL && temp->data == x)
        {
            node *p = temp;     
            temp = temp->prev;
            temp->next = NULL;
            free(p);
        }
    }
    return front;
}
void display(node *front, node *rear)
{
    if(front==NULL)
    printf("linkedlist is empty");
    else{
        printf("linkedlist contains: ");
        while(front!=NULL){
           printf(" %d",front->data); 
           front = front->next;
        }
        
    }
}
int main()
{
    node *front = NULL, *rear = NULL;
    int ch;

    do
    {
        printf("\n menu: \n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.exit\n");
        printf("\n Enter your Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            rear = insert(rear);
            if (front == NULL)
                front = rear;
            break;

        case 2:
            front=delete(front);
            if(front == NULL)
            rear=NULL;
            break;

        case 3:
            display(front,rear);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (ch != 4);
}                                                                                                 