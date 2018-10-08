#include "binary_tree.h"

int height(Btree *root)
{
    if (root == NULL)
        return 0;
    int left = height(root->left);
    int right = height(root->right);
    if (left > right)
        return right + 1;
    return left + 1;
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
    root = putValue(root, 8);
    verticalOrderTraversal(root);
    printf("\n%d ", height(root));
    return 0;
}