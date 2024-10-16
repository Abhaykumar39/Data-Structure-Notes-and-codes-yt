#include<stdio.h>
#include<stdlib.h>
typedef struct circularlist
{
    int data;
    struct circularlist *next;
}cl;
void Cenque(cl **f1,cl **r1)
{
    cl *p=NULL;
    int x;
    p=(cl*)malloc(sizeof(cl));
    if(p!=NULL)
    {
        printf("enter the value ");
        scanf("%d",&x);
        p->data=x;
        if(*f1==NULL&&*r1==NULL)
        {
            *f1=*r1=p;
        }
        else
        {
            (*r1)->next=p;
            *r1=p;
        }
        (*r1)->next=*f1;
    }
}
void cdeque(cl **f1,cl **r1)
{
    cl *p=NULL;
    if( *f1==NULL && *r1==NULL)
    {
        printf("queue is empty");
    }
    else
    {
        p=*f1;
        printf("\n the dequeue element is %d ",(*f1)->data);
        if(*f1==*r1)
        {
            *f1=(*r1)=NULL;
        }
        else
        {
            *f1=(*f1)->next;
            (*r1)->next=*f1;
        }
        free(p);
    }
}
void display(cl *f)
{
    cl *p=NULL;
    if(f==NULL)
    {
        printf("queue is empty ");
    }
    else
    {
        p=f;
        do
        {
            printf("%d ",p->data);
            p=p->next;
        }
        while(p!=f);
    }
}
int main()
{
    cl *f=NULL , *r=NULL;
    int ch;
    do
    {
        printf("\n1,Enqueue\n2.dequeue\n3.display\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            Cenque(&f,&r);
            break;

            case 2:
            cdeque(&f,&r);
            break;

            case 3:
            display(f);
            break;
        }

    }
    while(ch<=3);
}