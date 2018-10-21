#include <iostream>
#include <queue>

using namespace std;

typedef struct Btree
{
    int data, displacement;
    Btree* left;
    Btree* right;
}Btree;

Btree *putValue(Btree *root, int data)
{
    Btree *nn = new Btree();
    nn->data = data;
    nn->displacement = 0;
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

void inOrder(Btree* root) 
{
    if(root==NULL)
        return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

int maxi(int a, int b) {
    return a>b ? a:b;
}

int height(Btree* root) {
    if(root==NULL)
        return 0;
    return 1 + maxi(height(root->left), height(root->right));
}

void topView(Btree* root) {
    if(root==NULL)
        return;
    queue<Btree *> q;
    q.push(root);
    int h = height(root);
    int arr[2*h];
    for(int i=0;i<2*h;i++)
        arr[i] = -1;
    while(!q.empty())
    {
        Btree* root = q.front();
        q.pop();
        if(root->left)
        {
            root->left->displacement = root->displacement - 1;
            q.push(root->left);
        }
        if(root->right)
        {
            root->right->displacement = root->displacement + 1;
            q.push(root->right);
        }
        if(arr[root->displacement + h] == -1)
            arr[root->displacement + h] = root->data;
    }
    for(int i=0;i<2*h;i++)
        if(arr[i]!=-1)
            cout<<arr[i]<<" ";
}


int main() {
    Btree *root = NULL;
    root = putValue(root, 1);
    root = putValue(root, 2);
    root = putValue(root, 3);
    root = putValue(root, 4);
    root = putValue(root, 5);
    root = putValue(root, 6);
    root = putValue(root, 7);

    inOrder(root);
    cout << endl;
    topView(root);
}