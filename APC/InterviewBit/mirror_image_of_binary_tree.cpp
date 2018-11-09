#include "binary_tree.h"

Node* mirrorImage(Node* root) {
    if(root== NULL)
        return root;
    Node* left = mirrorImage(root->left);
    Node* right = mirrorImage(root->right);
    root->left = right;
    root->right = left;
    return root;
}