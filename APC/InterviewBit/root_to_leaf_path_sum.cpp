#include "binary_tree.h"
#include <vector>

// check whether a path exists or not
bool sumroot(Btree* root, int sum) {
    if(root==NULL)
        return sum==0?true:false;
    bool flag = false;
    int left = sum - root->data;
    if(left==0 && root->left==NULL && root->right==NULL)
        return true;
    if(root->left)
        flag = flag || sumroot(root->left, left);
    if(root->right)
        flag = flag || sumroot(root->right, left);
    return flag;
}

// print paths

void traverse(Btree* root, vector<vector<int> > &p, vector<int> q, int sum) {
    if(sum == root->data && root->left ==NULL && root->right==NULL)
    {
        q.push_back(root->data);
        p.push_back(q);
        return;
    }
    q.push_back(root->data);
    if(root->left)
        traverse(root->left, p, q, sum-root->data);
    if(root->right)
        traverse(root->right, p, q, sum - root->data);
    q.pop_back();
}

vector<vector<int> > printPath(Btree* root, int sum) {
    vector<vector<int> > p;
    vector<int> q;
    traverse(root, p, q, sum);
    return p;
}


int main() 
{
    Btree* root = NULL;
    root = putValue(root, 10);
    root = putValue(root, 8);
    root = putValue(root, 2);
    root = putValue(root, 3);
    root = putValue(root, 5);
    root = putValue(root, 9);
    cout<<sumroot(root, 21)<<endl;
    vector<vector<int> > res = printPath(root, 21);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
            cout<<res[i][j]<<" ";
        cout<<endl;
    }
    return 0;

}
