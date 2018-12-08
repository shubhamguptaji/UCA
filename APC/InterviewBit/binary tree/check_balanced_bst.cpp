#include "binary_tree.h"
#include <stdbool.h>

bool isBalanced(node* root) {
    if(root == NULL)
        return 1;
    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh-rh)> 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;
    return 0;
}
