#include<stdio.h>
typedef struct dlist{
    int data;
    struct dlist *next;
    struct dlist *prev;
}dl;
dl * dinsert(dl *);
dl * dremove(dl *);
void display(dl *,dl*);

int main()
{
    dl *l=NULL,*r=NULL;
    int ch;
    do
    {
       printf("\n1.Insert \n 2 delete \n 3.display");
       scanf("%d",&ch);
       switch(ch)
       {

        case 1:
        r= dinsert(r);
        break;
        if(l==NULL)
        {
            l=r;
        }
        case 2:
        l= dremove(l);
        break;

        case 3:
        display(l,r);
       }
    } while (ch<=3); 
}
dl *dinsert(dl *r)
{
    dl *p=NULL;
    int x;
   p= (dl *)malloc(sizeof(dinsert));
   if (p!=NULL)
   {
    printf("enter the value");
    scanf("%d",&x);
   }
}