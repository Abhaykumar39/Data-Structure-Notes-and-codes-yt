#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data ;
    struct Node *next;
} node;

int main()
{
    node *head=(node*)malloc(sizeof(node));
    head->data=6;
    node *second=(node*)malloc(sizeof(node));
    second->data=88;
}