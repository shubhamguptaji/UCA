#include <iostream>


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

Node* insert(int* a,int start, int end) {
    if(start > end)
        return NULL;
    int mid = (start + end)/2;
        Node* root = createNewNode(a[mid]);
        // cout<<root->data<< " ";
        root->left = insert( a,start,mid-1);
        root->right = insert( a, mid+1, end);
        return root;
}

void inorder(Node* root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout << root->data;
    inorder(root->right);
}

int main() {
    int a[] = { 1, 2, 3, 4, 5, 6, 7};
    Node* root = insert( a, 0, 6);
    inorder(root);
    return 0;
}