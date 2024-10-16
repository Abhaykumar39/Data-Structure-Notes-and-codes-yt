#include<stdio.h>
#include<stdlib.h>
typedef struct circular_list
{
    int data;
    struct circular_list *next;
}cl;
void Cenque(cl**,cl**);
void Cdeque(cl**,cl**);
void display(cl*);
int main()
{
    cl *f=NULL,*r=NULL;
    int ch;
    do
    {
        printf("\n1.ENQUEUE\n 2.DEQUEUE\n3. DISPLAY\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            Cenque(&f,&r);
            break;

            case 2:
            Cdeque(&f,&r);
            break;

            case 3:
            display(f);
            break;


        }
    } while(ch<=3);
    
}
void Cenque(cl **f1, cl **r1)
{
  cl  *p=NULL;
  int x;
  p=(cl*)malloc(sizeof(cl));
  if(p!=NULL)
  {
    printf("enter the value");
    scanf("%d",&x);
    p->data=x;
    if(*f1==NULL && *r1==NULL)
    {
        *f1=*r1=p;
        (*r1)->next=*f1;
    }
  }
  else
  {
(*r1)->next=p;
*r1=p;
  }
}
void Cdeque(cl **f1,cl **r1)
{
cl *p=NULL;
if(*f1==NULL&& *r1==NULL)
{
    printf("queue is empty");
}
else
{
    p=*f1;
    printf(" dequeue : %d",(*f1)->data);
}
if(*f1==*r1)
{
    *f1=*r1=NULL;
}
else{
    *f1=(*f1)->next;
    (*r1)->next=*f1;
}
free(p);
}
void display(cl *f)
{  cl *p=NULL;
 p=f;
    if (f==NULL)
    {
        printf("queue is empty");
    }
    else
    {
       
        do
        {
         printf("%d",p->data);
    
         p=p->next;
              
        } 
    while(p!=f);
    }
}