#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node *createNewNode(int d)
{
    node *nn = new node();
    nn->data = d;
    nn->left = NULL;
    nn->right = NULL;
    return nn;
}

node* leftrotate(node *x)
{
    if(x==NULL)
        return x;
    node *t = x->right;
    node *u = t->left;
    t->left = x;
    x->right = u;
    return t;
}

node* rightrotate(node *x)
{
    if(x==NULL)
        return x;
    node *t = x->left;
    node *u = t->right;
    t->right = x;
    x->left = u;
    return t;
}

int height(node *root)
{
    if (root == NULL)
        return 0;
    return 1 + (max(height(root->left), height(root->right)));
}

node* insert(node *root, int item)
{
    if (root == NULL)
        return createNewNode(item);
    else if (item < root->data)
        root->left = insert(root->left, item);
    else if(item>root->data)
        root->right = insert(root->right, item);
    else
        return root;
    int b = height(root->left) - height(root->right);
    if (b > 1)
    {
        if (height(root->left->left)>height(root->left->right))
        {
            return rightrotate(root);
        }
        else
            root->left = leftrotate(root->left);
        return rightrotate(root);
    }
    else if (b < -1)
    {
        if (height(root->right->right)>height(root->right->left))
        {
            return leftrotate(root);
        }
        else
            root->right = rightrotate(root->left);
        return leftrotate(root);
    }
    return root;
}

node* findmin(node* root) {
    while(root->left)
        root = root->left;
    return root;
}

node * deleteNode(node* root, int d) {
    if(root == NULL)
        return root;
    else if(d<root->data)
        root->left = deleteNode(root->left, d);
    else if(d>root->data)
        root->right = deleteNode(root->right,d );
    else
    {
        if(root->left==NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        else if(root->left==NULL)
        {
            node* temp = root;
            root= root->right;
            delete temp;
        }
        else if(root->right==NULL)
        {
            node *temp = root;
            root = root->left;
            delete temp;
        }
        else
        {
            node *temp = findmin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}

void inorder(node* root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<< root->data<<" ";
    inorder(root->right);
}

int main() {
    node* root = NULL;
    root = insert(root, 10);
    root = insert(root, 15);
    root = insert(root, 16);
    root = insert(root, 17);
    root = insert(root, 18);
    root = insert(root, 19);
    root = insert(root, 20);
    root = insert(root, 21);
    root = deleteNode(root, 21);
    inorder(root);
    cout<<height(root);
    return 0;
}