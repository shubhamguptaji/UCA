#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node *createNewNode(int d)
{
    node *nn = (node *)malloc(sizeof(node));
    nn->data = d;
    nn->left = NULL;
    nn->right = NULL;
    return nn;
}

void leftrotate(node *x)
{
    node *t = x->right;
    node *u = t->left;
    t->left = x;
    x->right = u;
}

void rightrotate(node *x)
{
    node *t = x->left;
    node *u = t->right;
    t->right = x;
    x->left = u;
}
void insert(node *root, int item)
{
    if (root == NULL)
        return createNewNode();
    if (item < root->data)
        root->left = insert(root->left, item);
    else
        root->right = insert(root->right, item);
    root->height = max(height(root->left), height(root->right));
    int b = getBalance(root);
    if (b > 1)
    {
        if (getbalance(root->left) >= 0)
        {
            return rightrotate(root);
        }
        else
            root->left = leftrotate(root->left);
        return rightrotate(root);
    }
    else if (b < 1)
    {
        if (getbalance(root->right))
    }
}