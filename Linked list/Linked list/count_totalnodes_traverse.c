#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
int count( struct node *);
int main()
{  
    struct node *head,*current;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->next=NULL;
    printf("%d\n",head->data);

   
    current=(struct node*)malloc(sizeof(struct node));
    current->data=98;
    current->next=NULL;
    printf("%d\n",head->data);
    head->next=current;

    current=(struct node*)malloc(sizeof(struct node));
    current->data=3;
    current->next=NULL;
    printf("%d\n",head->data);
    head->next->next=current;

    int count();
}
int count( struct node *head)
{
    int count=0;
    struct node *current ;
    head=current;
    while(current!=NULL)
    {
        count++;
        printf("%d\n",count);
        current=current->next;
    } 
}