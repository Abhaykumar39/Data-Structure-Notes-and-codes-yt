#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next,*prev;
}node;
node *insert(node *rear)
{
    int x;
    node *p=NULL;
    p=(node *)malloc(sizeof(node));
    if(p==NULL)
    {
        printf(" no memory allocation for node ");
    }
    else
    {
        printf("enter the value to be inseert ");
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
            p=p->prev;
            rear=p;
        }
    }
    rear->next=p;
    return p;
}
node *delete(node *front)
{
    if(front==NULL)
    {
        printf("linked list empty");
    }
    int x;
    printf("enter the value ");
    scanf("%d",&x);
    if(front->data==x)
    {
        if(front->next==NULL)
        {
            front=NULL;
        }
        else
        {
            node *p=NULL;
            front=front->next;
            front->prev=NULL;
            free(p);
        }
    }
    else
    {
        node *temp=front;
        while(temp->data!=x&&temp->next!=NULL)
        {
            temp=temp->next;
            if(temp->next!=NULL)
            {
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev;
                free(temp);
            }
            else if(temp->next=NULL&&temp->data==x)
            {
                node *p=temp;
                temp=temp->prev;
                temp->next=NULL;
            }
        }

    }
}

int main()
{
    
    int ch;

    do
    {
        printf("\n menu: \n1.Insert \n2.Delete \n3.DISPLAY\\n4.exit\n");
        printf("\n Enter your Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        

        case 2:
        

        case 3:
        

        case 4:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    } while (ch != 5);
}