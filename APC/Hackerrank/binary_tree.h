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

void inOrderPractice(Btree *root)
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
        root = root->right;
    }
}

void levelOrderTraversal(Btree *root)
{
    queue<Btree *> q;
    if (root == NULL)
        return;
    q.push(root);
    while (!q.empty())
    {
        printf("%d ", q.front()->data);
        if (q.front()->left)
            q.push(q.front()->left);
        if (q.front()->right)
            q.push(q.front()->right);
        q.pop();
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

void inOrderIterative2(Btree *root)
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

void preOrderIterative2(Btree *root)
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
// using  2 stacks
void postOrderIterative(Btree *root)
{
    stack<Btree *> stk1;
    stack<Btree *> stk2;
    stk1.push(root);
    while (1)
    {
        if (stk1.empty())
            break;
        root = stk1.top();
        stk1.pop();
        stk2.push(root);
        if (root->left)
            stk1.push(root->left);
        if (root->right)
            stk1.push(root->right);
    }
    while (!stk2.empty())
    {
        Btree *node = stk2.top();
        printf("%d ", node->data);
        stk2.pop();
    }
}

void postOrderIterative2(Btree *root)
{
    stack<Btree *> stk;
    while (1)
    {
        while (root)
        {
            if (root->right)
                stk.push(root->right);
            stk.push(root);
            root = root->left;
        }
    }
}

void verticalOrderTraversal(Btree *root)
{
    stack<Btree *> stk;
    stk.push(root);
    while (!stk.empty())
    {
        Btree *temp = stk.top();
        printf("%d ", temp->data);
        stk.pop();
        if (temp->right)
            stk.push(temp->right);
        if (temp->left)
            stk.push(temp->left);
        // printf("%d ", temp->data);
    }
}

// int height(Btree *root)
// {
//     if (root == NULL)
//         return 0;
//     return 1 + (max(height(root->left), height(root->right)));
// }

// void topView(Btree *root)
// {
//     int l = 0, r = 0;
//     printf("%d ", height(root));
//     int a[7];
//     a[3] = root->data;
//     Btree *root1 = root;
//     while (root1)
//     {
//         if (root1->left)
//         {
//             a[3 - (++l)] = root1->left->data;
//             // printf("%d ", root1->left->data);
//             root1 = root1->left;
//         }
//         else
//             break;
//     }
//     Btree *root2 = root;
//     while (root2)
//     {
//         if (root2->right)
//         {
//             a[3 + (++r)] = root2->right->data;
//             // printf("%d ", root2->right->data);
//             root2 = root2->right;
//         }
//         else
//             break;
//     }
//     for (int i = 0; i < 7; i++)
//         printf("%d ", a[i]);
// }

// int main()
// {
//     Btree *root = NULL;
//     root = putValue(root, 1);
//     root = putValue(root, 2);
//     root = putValue(root, 3);
//     root = putValue(root, 4);
//     root = putValue(root, 5);
//     root = putValue(root, 6);
//     root = putValue(root, 7);

//     // inOrder(root);
//     // cout << endl;
//     // preOrder(root);
//     // cout << endl;
//     // postOrder(root);
//     // cout << endl;
//     // inOrderIterative(root);
//     // cout << endl;
//     // postOrderIterative2(root);
//     topView(root);
//     return 0;
// }
