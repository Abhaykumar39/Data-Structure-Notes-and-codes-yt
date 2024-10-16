#include<stdio.h>
#define max 10
int Cenqueue(int[],int,int);
int Cdequeue(int[],int,int);
void display(int[],int,int);
int main()
{
    int f=-1,r=-1,cq[max],ch;
    do
    {
        printf("\n 1.Enqueue\n 2.Dequeue\n 3.Display\n");
        scanf("%d",&ch);
        switch(ch)
        {
             case 1:
             r=Cenqueue(cq,f,r);
             if(f==-1)
             {
                f=0;
             }
             break;

             case 2:
             f=Cdequeue(cq,f,r);
             if(f==-1)
             {
                r=-1;
             }
             break;

             case 3:
             display(cq,f,r);
             break;

        }
     
    } while (ch<=3);
}
int Cenqueue(int cq[],int f,int r)
{
    int x;
    if((r+1)%max==f)
    {
        printf("queue is full");
    }
    else
    {   printf("enter the elements");
        scanf("%d",&x);
        r=(r+1)%max;
        cq[r]=x;
    }
    return r;
}
int Cdequeue(int cq[],int f,int r)
{
    int z;
    if(f==-1)
    {
        printf("queue is full");
    }
    else
    {
        z=cq[f];
        printf("%d ",z);
       if(f==r)
       {
        f=-1;
       }
       else
       {
        f=(f+1)%max;
       }
    }
    return f;
}
void display(int cq[],int f,int r) 
{
    if(f==-1)
    {
        printf("stack is empty");
    }
    else
    {
        while(f<=r)
        {
            printf("%d ",cq[f]);
            f=(f+1)%max;
        }
    }
}