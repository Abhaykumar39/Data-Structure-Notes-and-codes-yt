#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
}node;
node *insert(node *rear)
{
    node *p=NULL;
    int x;
    p=(node *)malloc(sizeof(node));
    if(p==NULL)
    {
        printf("no memory allocation");
    }
    else
    {
        printf("enter the element");
        scanf("%d",&x);
        p->data=x;
        if(rear==NULL)
        {
            rear=p;
            rear->prev=NULL;
        }
        else
        {
            rear->next=p;
            p->prev=NULL;
            rear=p;
        }
    }
    rear->next=NULL;
    return rear;
}
node *delete(node *front)
{
    node *p;
    int x;
    if(front==NULL)
    {
        printf(" linked list is empty");
    }
    printf("enter the element to be deleted");
    scanf("%d",&x);
    if(front->data==x)
    {
        if(front->next==NULL)
        {
             front=NULL;
        }
        else
        {
            p=front;
            front=front->next;
            front->prev=NULL;
            free(p);
        }
       
    }
    else
    {
        node *temp;
        while (temp->data != x && temp->next != NULL)
            temp = temp->next;
        if (temp->next != NULL)
    }
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