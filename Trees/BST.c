#include <stdio.h>
typedef struct node
{
    int data;
    struct node *left, *right;
} BST;

void Insert(BST **Root, int value)
{
    BST *p = NULL;
    if ((*Root) == NULL)
    {
        p = (BST *)malloc(sizeof(BST));
        p->data = value;
        p->left = NULL;
        p->right = NULL;
        (*Root) = p;
        return;
    }
    else if ((*Root)->data > value)
    {
        Insert(&((*Root)->left), value);
    }
    else if ((*Root)->data < value)
    {
        Insert(&((*Root)->right), value);
    }
    else
    {
        printf("Duplicate value : ");
        return;
    }
}
int countnodes(BST *Root)
{
    if (Root == NULL)
    {
        return 0;
    }
    int leftcount = countnodes(Root->left);
    int rightcount = countnodes(Root->right);
    return 1 + leftcount + rightcount;
}
int countleafnodes(BST *Root)
{
    if (Root == NULL)
    {
        return 0;
    }
    if (Root->left == NULL && Root->right == NULL)
    {
        return 1;
    }
    return countleafnodes(Root->left) + countleafnodes(Root->right);
}
int countleftchild(BST *Root)
{
    if (Root == NULL)
    {
        return 0;
    }
    if (Root->left != NULL && Root->right == NULL)
    {
        return 1 + countleftchild(Root->left);
    }
    else
        return countleftchild(Root->left) + countleftchild(Root->right);
}

int countrightchild(BST *Root)
{
    if (Root == NULL)
    {
        return 0;
    }
    if (Root->left == NULL && Root->right != NULL)
    {
        return 1 + countrightchild(Root->right);
    }
    else
        return countrightchild(Root->left) + countrightchild(Root->right);
}

int maxValue(BST *Root)
{
    while (Root->right)
    {
        Root=Root->right;
    }
    return Root->data;
}
int minValue(BST *Root)
{
    while (Root->left)
    {
        Root=Root->left;
    }
    return Root->data;
}
int main()
{
    BST *Root = NULL;
    int ch, value;
    do
    {
        printf("1.Insert\n 2.count nodes\n 3.count leaf nodes\n 4. left child only\n 5.Right child only \n 6.left side \n 7.right side \n 8.Max value\n 9.Min value\n");
        printf("\nenter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter the value you want to insert ");
            scanf("%d", &value);
            Insert(&Root, value);
            break;

        case 2:
            printf("%d\n", countnodes(Root));
            break;

        case 3:
            printf("%d\n", countleafnodes(Root));
            break;

        case 4:
            printf("%d\n ", countleftchild(Root));
            break;

        case 5:
            printf("%d\n ", countrightchild(Root));
            break;

        case 6:
            printf("%d\n ", countnodes(Root->left));
            break;

        case 7:
            printf("%d\n ", countnodes(Root->right));
            break;

        case 8:
            printf("%d\n ", maxValue(Root));
            break;

        case 9:
            printf("%d\n ", minValue(Root));
            break;
        
        }
    } while (ch <= 9);
}