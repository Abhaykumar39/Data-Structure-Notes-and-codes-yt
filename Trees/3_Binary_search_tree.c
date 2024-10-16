#include <stdio.h>
typedef struct Binarysearchtree
{
    struct binarysearchtree *left;
    int data;
    struct binarysearchtree *right;
} BST;
void Insert(BST **, int);
void preorder(BST *);
void inorder(BST *);
void postorder(BST *);
int main()
{
    BST *Root = NULL;
    int ch, value;
    do
    {
        printf("1.Insert\n 2.preorder\n 3.inorder\n 4.postorder\n 5.Exit");
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
            preorder(Root);
            break;

        case 3:
            inorder(Root);
            break;

        case 4:
            postorder(Root);
            break;
        }
    } while (ch <= 4);
}
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

void preorder(BST *Root)
{
    if (Root == NULL)
    {
        return;
    }
    printf("%d ", Root->data);
    preorder(Root->left);
    preorder(Root->right);
}
void inorder(BST *Root)
{
    if (Root == NULL)
    {
        return;
    }
    inorder(Root->left);
    printf("%d ", Root->data);
    inorder(Root->right);
}
void postorder(BST *Root)
{
    if (Root == NULL)
    {
        return;
    }
    postorder(Root->left);
    postorder(Root->right);
    printf("%d ", Root->data);
}