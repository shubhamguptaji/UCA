#include <iostream>
#include <stdbool.h>

using namespace std;

typedef struct Node
{
    int data;
    Node *left;
    Node *right;
} Node;

Node *createNewNode(int data)
{
    Node *nn = new Node();
    nn->data = data;
    nn->left = NULL;
    nn->right = NULL;
    return nn;
}

Node *insert(Node *root, int d)
{
    if (root == NULL)
        return createNewNode(d);
    else if (root->data <= d)
    {
        root->right = insert(root->right, d);
    }
    else
        root->left = insert(root->left, d);

    return root;
}
Node *findmin(Node *root)
{
    // root = root->left;
    while (root->left)
        root = root->left;
    return root;
}

Node *deleteNode(Node *root, int d)
{
    if (root == NULL)
        return root;
    else if (d < root->data)
        root->left = deleteNode(root->left, d);
    else if (d > root->data)
        root->right = deleteNode(root->right, d);
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        else if (root->left == NULL)
        {
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root;
            root = root->left;
            delete temp;
        }
        else
        {
            Node *temp = findmin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}

bool search(Node *root, int d)
{
    if (root == NULL)
        return false;
    if (d == root->data)
        return true;
    else if (d <= root->data)
        search(root->left, d);
    else
        search(root->right, d);
}

void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    Node *root = NULL;
    root = insert(root, 5);
    root = insert(root, 4);
    root = insert(root, 6);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 2);
    root = insert(root, 8);
    root = insert(root, 1);
    root = insert(root, 9);
    deleteNode(root, 1);
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    cout << search(root, 1) << endl;
    return 0;
}