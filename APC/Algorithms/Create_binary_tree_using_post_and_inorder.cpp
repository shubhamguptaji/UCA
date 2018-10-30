#include <bits/stdc++.h>
using namespace std;

typedef struct treenode {
    int val;
    treenode* left;
    treenode* right;
}treenode;

// treenode* new_node(int d) {
//     treenode nn = (treenode*)malloc(sizeof(treenode));
//     nn->val = d;
//     nn->left = NULL;
//     nn->right = NULL;
//     return nn;
// } 

int find(int num, int *ino, int left, int right)
{
    int i;
    for (i = left; i <= right; i++)
        if (ino[i] == num)
            return i;
    return -1;
}

void constructTree(int *post, int *ino, int left, int right, treenode **root, int *index)
{
    int mid = find(post[*index], ino, left, right);
    if (mid == -1)
    {
        *root = NULL;
    }
    else
    {
        (*root)->val = post[*index];
        (*root)->left = (treenode*)malloc(sizeof(treenode));
        (*root)->right = (treenode*)malloc(sizeof(treenode));
        *index -= 1;
        constructTree(post, ino, mid + 1, right, &((*root)->right), index);
        constructTree(post, ino, left, mid - 1, &((*root)->left), index);
        
    }
}

treenode* buildTree(int* A, int n1, int* B, int n2) {
    int index =n2-1;
    treenode* root = (treenode*)malloc(sizeof(treenode));
    constructTree(B,A, 0 , n2-1, &root, &index);
    return root;
}

void preorder(treenode* root) {
    if(root==NULL)
        return;
    printf("%d ", root->val);
    preorder(root->left);
    preorder(root->right);
}
int main() 
{
    int in[] = { 2,1,3}; 
    int post[] = { 2,3,1 };
    treenode* root = buildTree(in, 3, post,  3);
    preorder(root);
    return 0;
}