#include "binary_tree.h"

Btree *lca(Btree *root, int v1,int v2) 
{
    if(root==NULL)
        return root;
    if(root->data == v1 || root->data == v2)
        return root;
    if(v1< root->data && v2<root->data)
        return lca(root->left, v1, v2);
    else if(v1>root->data && root->data< v2)
        return lca(root->right, v1, v2);
    else
        return root;
}