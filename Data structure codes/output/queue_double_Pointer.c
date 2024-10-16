#include<stdio.h>
#include <stdlib.h>
typedef struct queue{
int data;
struct queue *next;
}q;
void enqueue(q**);
void dequeue(q**);
void display(q*);
int main(){
int ch;
q *f=NULL, *r=NULL;
printf("\n1.Push\n2.Pop\n3.display\n4.Exit\n");



}