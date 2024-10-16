#include <stdio.h>
#include <stdlib.h>
#define max 10
int push(int[], int);
int pop(int[], int);
void display(int[], int);
void peek(int[], int);
int main()
{
   // To Indicate Stack Is Empty we will put -1 in the variable top.invalid index put...
   // Note: top=0 indicates that the topmost elememt is at index 0 and this means there is only one elements in the stack..
   // For the push operation : 1. top is increased by 1... (2).new element is pushed at the position top.
   // For the pop operation :1. the element at the position top is deleted 2. top is decrement by 1.
   int stack[max], top = -1, ch;
   do
   {
      printf("\n 1.push \n2.pop \n3.display \n4.peek \n5.exit\n");
      scanf("%d", &ch);
      switch (ch)
      {
      case 1:
         top = push(stack, top);
         break;

      case 2:
         top = pop(stack, top);
         break;

      case 3:
         display(stack, top);
         break;

      case 4:
         peek(stack, top);
         break;

      case 5:
         exit(0);
         break;
      }
   } while (ch <= 5);
}
int push(int stack[], int top)
{
   int x;
   if (top == max - 1)
   {
      printf("stack is full\n");
   }
   else
   {
      printf("enter the element\n");
      scanf("%d", &x);
      top++;
      stack[top] = x;
   }
   return (top);
}
int pop(int stack[], int top)
{
   int z = 0;
   if (top == -1)
   {
      printf("stack is empty");
   }
   else
   {
      z = stack[top];
      printf("%d", z);
      top--;
   }
   return (top);
}
void display(int stack[], int top)
{
   if (top == -1)
   {
      printf("stack is empty ");
   }
   else
   {
      while (top >= 0)
      {
         printf("%d", stack[top]);
         top--;
      }
   }
}
void peak(int stack[], int top)
{
   if (top == -1)
   {
      printf("stack is empty");
   }
   else
   {
      printf("%d", stack[top]);
   }
}