#include "binary_tree.h"

void Sum(Btree* root, int sum, int pathSum, int* flag) {
    if(root==NULL)
        return;
    if(pathSum + root->data  == sum && root->left==NULL && root->right ==NULL)
        *flag =1;
    Sum(root->left, sum, pathSum+root->data, flag);
    Sum(root->right, sum, pathSum+root->data, flag);
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
    // root = putValue(root, 8);
    int flag=0;
    Sum(root, 11, 0, &flag);
    cout << flag;
    return 0;

}