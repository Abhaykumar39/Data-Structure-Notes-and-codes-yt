#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head,*new;
    new = (struct node *)malloc(sizeof(struct node));
    printf("enter the value");
    scanf("%d",&new->data);
    new->next=head;
    head = new;
}
