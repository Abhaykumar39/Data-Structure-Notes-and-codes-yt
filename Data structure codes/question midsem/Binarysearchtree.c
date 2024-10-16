#include <stdio.h>
#include <stdlib.h>
typedef struct binarysearchtree
{
    struct binarysearchtree *left;
    int data;
    struct binarysearchtree *right;
} BST;
void Insert(BST **root, int value)
{
    BST *p = NULL;
    if ((*root) == NULL)
    {
        p = (BST *)malloc(sizeof(BST));
        p->data = value;
        p->left = NULL;
        p->right = NULL;
        (*root) = p;
        return;
    }
    else if ((*root)->data > value)
    {
        Insert(&((*root)->left), value);
    }
    else if ((*root)->data < value)
    {
        Insert(&((*root)->right), value);
    }
    else
    {
        printf("duplicate value");
        return;
    }
}
void preorder(BST *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}
void inorder(BST *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}
void postorder(BST *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}
int countnodes(BST *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftcount = countnodes(root->left);
    int rightcount = countnodes(root->right);
    return 1 + leftcount + rightcount;
}
int leafnode(BST *root)
{
    if(root == NULL)
    {
        return 0;
    }
    if(root->left==NULL&&root->right==NULL)
    {
        return 1;
    }
    return leafnode(root->left)+leafnode(root->right);
}
int leftchild(BST *root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left!=NULL&&root->right==NULL)
    {
        return 1+leftchild(root->left);
    }
    return leftchild(root->left)+leftchild(root->right);
}
int rightchild(BST *root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL&&root->right!=NULL)
    {
        return 1+rightchild(root->left);
    }
    return leafnode(root->left)+leafnode(root->right);
}
int bothchild(BST *root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL&&root->right!=NULL)
    {
        return 1+bothchild(root->left)+bothchild(root->right);
    }
    return bothchild(root->left)+bothchild(root->right);
}
int max(BST *root)
{
    if(root==NULL)
    {
        return 0;
    }
    while(root->right)
    {
        root=root->right;
    }
    return root->data;
}
int min(BST *root)
{
    if(root==NULL)
    {
        return 0;
    }
    while(root->left)
    {
        root=root->left;
    }
    return root->data;
}
int main()
{
    BST *root = NULL;
    int ch, value;
    do
    {
        printf("1.Insert\n 2. preorder\n 3.Inorder \n 4. postorder\n 5.countnodes\n 6.leaf\n 7.countleftchild\n 8.countrightchild\n 9.countrightside\n 10.countrightside\n 11.countbothchild\n 12.max \n 13.min ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter the value : ");
            scanf("%d", &value);
            Insert(&root, value);
            break;

        case 2:
            preorder(root);
            break;

        case 3:
            inorder(root);
            break;

        case 4:
            postorder(root);
            break;

        case 5:
        printf("%d",countnodes(root));
        break;

        case 6:
        printf("%d",leafnode(root));
        break;

        case 7:
        printf("%d",leftchild(root));
        break;

        case 8:
        printf("%d",rightchild(root));
        break;

        case 9:
        printf("%d",countnodes(root->left));
        break;

        case 10:
        printf("%d",countnodes(root->right));
        break;

        case 11:
        printf("%d",bothchild(root));
        break;

        case 12:
        printf("%d",max(root));
        break;

        case 13:
        printf("%d",min(root));
        break;


        }

    } while (ch <= 13);
}