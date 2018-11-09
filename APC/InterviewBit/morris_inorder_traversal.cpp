#include "binary_tree.h"

void morrisInorder(Btree* root)
{
    if(root == NULL)
        return;
    Btree* current = root;
    while(current!=NULL)
    {
        if(current->left==NULL)
        {
            cout<<current->data<< " ";
            current= current->right;
        }
        else
        {
            Btree* pre = current->left;
            while(pre->right!=NULL && pre->right!= current)
                pre = pre->right;
            if(pre->right==NULL)
            {
                pre->right = current;
                current = current->left;
            }
            else
            {
                pre->right == NULL;
                cout<<current->data<<" ";
                current = current->right;
            }
        }
    }
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

    morrisInorder(root);
    return 0;
}