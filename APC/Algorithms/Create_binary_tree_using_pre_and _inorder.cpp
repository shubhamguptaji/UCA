#include <bits/stdc++.h>

using namespace std;

typedef struct Node {
    int data;
    Node* left;
    Node* right;
}Node;

Node* newNode(int d) {
    Node* nn = new Node();
    nn->data = d;
    nn->left = NULL;
    nn->right = NULL;
}




int find(int num, int *ino, int left, int right)
{
    int i;
    for (i = left; i <= right; i++)
        if (ino[i] == num)
            return i;
    return -1;
}

void constructTree(int *pre, int *ino, int left, int right, Node **root, int *index)
{
    int mid = find(pre[*index], ino, left, right);
    if (mid == -1)
    {
        *root = NULL;
    }
    else
    {
        (*root)->data = pre[*index];
        (*root)->left = (Node*)malloc(sizeof(Node));
        (*root)->right = (Node*)malloc(sizeof(Node));
        *index += 1;
        constructTree(pre, ino, left, mid - 1, &((*root)->left), index);
        constructTree(pre, ino, mid + 1, right, &((*root)->right), index);
    }
}

Node* buildTree(int* A, int n1, int* B, int n2) {
    int index =0;
    Node* root = (Node*)malloc(sizeof(Node));
    constructTree(A,B, 0 , n2-1, &root, &index);
    return root;
}

void inorder(Node* root) {
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root) {
    if(root==NULL)
        return;
    cout<<root->data<< " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    int in[] = {3,2,4,1,5};
    int pre[] = {1,2,3,4,5};
    Node* root = buildTree(pre, 5, in, 5);
    inorder(root);
    cout<<endl;
    preorder(root);
    return 0;
}