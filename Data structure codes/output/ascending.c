#include <stdio.h>
typedef struct dlist
{
    int data;
    struct dlist* next,*prev;
}dl;
void INSERT(dl**l1,dl**r1)
{
    int x;
    printf("\n\tEnter a Value to be inserted in the Linked List :");
    scanf("%d",&x);
    dl*p=(dl*)malloc(sizeof(dl));
    p->data=x;
    p->next=NULL;

    if(*l1==NULL)
    {
        *l1=*r1=p;
    }
    else if(x<=(*l1)->data)
    {
        p->next=*l1;
        *l1=p;
    }
    else if(x>=(*r1)->data)
    {
        (*r1)->next=p;
        *r1=p;
    }
    else
    {
        dl*q=*l1;
        while(q->next->data<x)
        {
            q=q->next;
        }
        p->next=q->next;
        q->next=p;
    }                                                                                                                                                                                                            
}
void DISPLAY(dl**l)
{ dl *temp;
    if(*l==NULL)
    {
        printf("\n\t!!  Linked List is Empty  !!\n");
    }
    else
    {
        temp=*l;
        printf("\n\tElements of Linked List : \n");
        while(temp!=NULL)
        {
            printf("\n\t%d",(temp)->data);
            (temp)=(temp)->next;
        }
        printf("\n");
    }
}
main()
{
    dl*l=NULL;
    dl*r=NULL;
    int ch;
    while(1)
    {
        printf("\n\tOperations to be performed on Linked list\n");
        printf("\n\t1.INSERT \n\t2.DISPLAY\n\t3.END\n");
        printf("\n\tEnter your choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            INSERT(&l,&r);
            break;
        case 2:
            DISPLAY(&l);
            break;
        case 3:
            exit(0);
        }
    }
}
