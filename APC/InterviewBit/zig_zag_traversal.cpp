#include "binary_tree.h"
void swap(stack<Btree* > *a, stack<Btree* > *b) 
{
    stack<Btree* > temp = *a;
    *a = *b;
    *b = temp; 
}

void zigzagOrder(Btree* root){
    if(root==NULL)
        return;
    stack<Btree* > currentLevel;
    stack<Btree *> nextLevel;
    bool even = true;
    currentLevel.push(root);
    while(!currentLevel.empty()) {
        stack<Btree *> temp = currentLevel.top();
        currentLevel.pop();
        if(temp) {
            cout<<temp->data<<" ";
            if(even) {
                if(temp->left)
                    nextLevel.push(temp->left);
                if(temp->right)
                    nextLevel.push(temp->right);
            }
            else 
            {
                if(temp->right)
                    nextLevel.push(temp->right);
                if(temp->left)
                    nextLevel.push(temp->left);
            }
            if(currentLevel.empty()) {
                even = !even;
                swap(&currentLevel, &nextLevel);
            }
        }
    }
    
}