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