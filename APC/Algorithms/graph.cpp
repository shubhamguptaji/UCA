#include <bits/stdc++.h>
using namespace std;

vector<int> v[10];
int vis[10] = {0};

void insert(int a, int b) {
    v[a].push_back(b);
}

void bsf(int a) {
    queue<int> q;
    q.push(a);
    vis[a] = 1;
    while(!q.empty()) {
        int temp = q.front();
        cout<<temp<< " ";
        q.pop();
        // cout<<temp<<endl;
        for(int i=0;i<v[temp].size();i++) {
            if(vis[v[temp][i]]==0) {
            vis[v[temp][i]]=1;
            q.push(v[temp][i]);
            }
            // cout<<v[temp][i];
        }
    }
}
// recursive dfs
void dfs(int a) {
    vis[a] = 1;
    cout<<a<<" ";
    for(int i=0;i<v[a].size();i++) {
        if(vis[v[a][i]]==0)
         {
            //  cout<<v[a][i]<<" ";
            dfs(v[a][i]);
         }
    }
}

//iterative

void iterativeDFS(int a) {
    stack<int> stk;
    stk.push(a);
    vis[a]=1;
    while(!stk.empty()) {
        int temp = stk.top();
        stk.pop();
        cout<<temp<<" ";
        for(int i=0;i<v[temp].size();i++) {
            if(vis[v[temp][i]]==0) {
                vis[v[temp][i]] = 1;
                stk.push(v[temp][i]);
            }
        }
    }
}


int main() {
    insert(0,2);
    insert(0,3);
    insert(0,4);
    insert(0,5);
    insert(4,6);
    insert(5,7);
    insert(6,8);
    insert(7,9);
    insert(3,2);
    insert(5,0);
    // bsf(0);
    iterativeDFS(0);
}