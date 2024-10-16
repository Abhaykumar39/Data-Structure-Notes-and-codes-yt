#include<stdio.h>
typedef struct stack{
    int data;
    struct stack *next;
}stk;
stk* push(stk*);
stk* pop(stk*);
void display(stk*);
int main()
{
   int ch;
   stk *top=0;
   do{
    printf("\n1.push\n2.pop\n3.display\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        top=push(top);
        break;

        case 2:
        top=pop(top);
        break;

        case 3:
        disp(top);
        break;
    }
   }
   while(ch<=3);
}
stk* push( stk* top);