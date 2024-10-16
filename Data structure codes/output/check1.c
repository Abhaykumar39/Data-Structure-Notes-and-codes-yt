#include<stdio.h>
int main()
{
    int sub[50],i;
    for(i=0;i<=48;i++)
    {
        sub[i] = i;
        printf("\n%d",sub[i]);
    }
}int main()
{
    
    int ch;

    do
    {
        printf("\n menu: \n1.Push \n2.Pop \n3.DISPLAY\n4.PEEK\n5.exit\n");
        printf("\n Enter your Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        

        case 2:
        

        case 3:
        

        case 4:
        

        case 5:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    } while (ch != 5);
}