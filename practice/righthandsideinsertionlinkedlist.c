#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;
}sl;
int main()
{
    sl *p=NULL,*l=NULL,*r=NULL;
    int ch;
    p=(sl *)malloc(sizeof(sl));
    if(p!=NULL)
    { int x;
        printf("enter the value");
        scanf("%d",&x);
        p->data = x;
     if(l==NULL)
     {
        l=r=p;
     }
     else
     {
        r->next=p;
        r=p;
     }
    }
}