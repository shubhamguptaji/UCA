#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    do {
        int x;
        int flag = 0;
        stack<int> stk;
        vector<int> v;
        for(int i=0;i<n;i++) {
            cin>>x;
            while(stk.size() && stk.top()<x) {
                v.push_back(stk.top());
                stk.pop();
            }
            stk.push(x);
        }
        while(stk.size()) {
            v.push_back(stk.top());
            stk.pop();
        }
        for(int i=0;i<v.size();i++) {
            if(v[i]!=i+1) {
                flag = 1;
                break;
            }
        }
        if(flag==0) {
            cout<<"yes"<<endl;
        }else {
            cout<<"no"<<endl;
        }
        cin>>n;
    }while(n!=0);
}