#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include <queue>
#include <iostream>
using namespace std;

typedef struct Btree
{
    int data;
    struct Btree *left;
    struct Btree *right;
} Btree;

void insert(struct Btree *temp, int key)
{
    Btree *a = new Btree();
    a->data = key;
    a->left = NULL;
    a->right = NULL;
    if (temp == NULL)
    {
        temp = a;
        return;
    }
    queue<struct Btree *> q;
    q.push(temp);
    while (!q.empty())
    {
        struct Btree *temp = q.front();
        q.pop();

        if (!temp->left)
            q.push(temp->left);
        else
        {
            temp->left = a;
            break;
        }

        if (!temp->right)
            q.push(temp->right);
        else
        {
            temp->right = a;
            break;
        }
    }
}

Btree *putValue(Btree *root, int data)
{
    Btree *nn = new Btree();
    nn->data = data;
    nn->left = NULL;
    nn->right = NULL;
    if (root == NULL)
        return nn;

    queue<Btree *> q;
    q.push(root);
    while (!q.empty())
    {
        Btree *node = q.front();
        q.pop();
        if (node->left)
            q.push(node->left);
        else
        {
            node->left = nn;
            return root;
        }
        if (node->right)
            q.push(node->right);
        else
        {
            node->right = nn;
            return root;
        }
    }
}

void inOrder(Btree *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}

void preOrder(Btree *root)
{
    if (root == NULL)
        return;
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Btree *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}

void inOrderIterative(Btree *root)
{
    stack<Btree *> stk;
    while (1)
    {
        while (root)
        {
            stk.push(root);
            root = root->left;
        }
        if (stk.empty())
            return;
        root = stk.top();
        stk.pop();
        printf("%d ", root->data);
        root = root->right;
    }
}

void preOrderIterative(Btree *root)
{
    stack<Btree *> stk;
    while (1)
    {
        while (root)
        {
            printf("%d ", root->data);
            stk.push(root);
            root = root->left;
        }
        if (stk.empty())
            return;
        root = stk.top();
        stk.pop();
        root = root->right;
    }
}

void postOrderIterative(Btree *root)
{
    stack<Btree *> stk1;
    stack<Btree *> stk2;
    while(1) {
        stk1.push(root);
        Btree *node = stk1.top();
        stk1.pop();
        stk2.push(node);
        if(node->left) {
            stk1.push(node->left);
        }
        if(node->right) {
            stk1.push(node->right);
        }
        if(stk1.empty())
            return;

    }
    while(!stk2.empty()){
        printf("%d ", stk2.top());
        stk2.pop();
    }
}

int main()
{
    Btree *root = NULL;
    root = putValue(root, 1);
    root = putValue(root, 2);
    root = putValue(root, 3);
    root = putValue(root, 4);
    root = putValue(root, 5);
    root = putValue(root, 6);
    root = putValue(root, 7);

    // inOrder(root);
    // cout << endl;
    // preOrder(root);
    // cout << endl;
    // postOrder(root);
    // cout << endl;
    // inOrderIterative(root);
    cout << endl;
    postOrderIterative(root);
    return 0;
}