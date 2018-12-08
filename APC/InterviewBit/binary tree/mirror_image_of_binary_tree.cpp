#include "binary_tree.h"

Btree* mirrorImage(Btree* root) {
    if(root== NULL)
        return root;
    Btree* left = mirrorImage(root->left);
    Btree* right = mirrorImage(root->right);
    root->left = right;
    root->right = left;
    return root;
}

int main() 
{
    Btree* root = NULL;
    root = putValue(root, 1);
    root = putValue(root, 2);
    root = putValue(root, 3);
    root = putValue(root, 4);
    root = putValue(root, 5);
    root = putValue(root, 6);
    root = putValue(root, 7);

    inOrder(root);
    Btree* node = mirrorImage(root);
    cout<<endl;
    inOrder(node);
}