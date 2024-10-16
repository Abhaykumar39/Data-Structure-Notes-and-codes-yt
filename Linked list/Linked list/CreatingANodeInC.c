#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
};
int main()
{
    struct node *head,*current;
    head=(struct node *)malloc(sizeof(struct node));

    head->data=50;
    head->next=NULL;

    printf("%d",head->data);

     current=(struct node *)malloc(sizeof(struct node));

    current->data=60;
    current->next=NULL;

    head->next=current;
}