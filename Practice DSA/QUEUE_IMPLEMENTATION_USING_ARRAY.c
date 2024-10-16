#include<Stdio.h>
#define max 10
int Enqueue(int[],int);
int dequeue(int[],int,int);
void display(int[],int,int);
void peak(int[],int);
int main()
{
    int queue[max],f=-1,r=-1,ch;
    do
    {
        printf("\n 1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n 4.PEAK\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            r=Enqueue(queue,r);
            if(f==-1)
            {
                f=0;
            }
            break;

            case 2:
            f=dequeue(queue,f,r);
            if(f==-1)
            {
                r=-1;
            }
            break;
            
            case 3:
            display(queue,f,r);
            break;

            case 4:
            peak(queue,f);
            break;
        }
    } while (ch<=4);  
}
int Enqueue(int queue[],int r)
{ int x;
    if(r==max-1)
    {
        printf("queue is full");
    }
    else
    {
          printf("enter the elements ");
          scanf("%d",&x);
          r++;
          queue[r]=x;
    }
    return r;
}
int dequeue(int queue[],int f,int r)
{  int z;
    if(f==-1&&r==-1)
    {
        printf("queue is empty");
    }
    else
    {  z=queue[f];
        printf("deleted element is: %d",z);
        if(f==r)
        {
            f=-1 ;
        }
        else
        {
            f++;
        }
    }
    return f;
}
void display(int queue[],int f,int r)
{
    if(f==-1&&r==-1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("Element of array: ");
        while(f<=r)
        {
            printf("%d ",queue[f]);
            f++;
        }
    }
    printf("\n");
}
void peak(int queue[],int f)
{
    if(f==-1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("peek element: %d",queue[f]);
    }
}