#include<stdio.h>
#include<stdlib.h>
#define max 10
int enq(int[],int);
int deq(int[],int,int);
void display(int[],int,int);
void peak(int[],int);
int main()
{
    int stack[max], ch, top = -1,Q,R,F;
    do
    {
        printf("1 - enq\n2- deq\n3- display\n4- peak\n5- exit");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            R=enq(Q,R);
            if(F==-1)
            {
                F=0;
            }
            break;
        case 2:
          F=deq(Q,F,R);
          F==-1;
          R=-1;
            break;
        case 3:
         display(Q,F,R);
            break;
        case 4:
        peak(Q,F);
            break;
        case 5:
        exit(0);
            break;
        }
    }
        while (ch <= 4);    
}
int enq(int Q[],int R)
{
    int x;
    if(R==max-1)
}