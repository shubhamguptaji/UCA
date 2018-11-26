#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        string str;
        cin>>str;
        stack<char> stk;
        int count =0;
        for(int i=0;i<str.length();i++) {
            if(str[i]=='<')
                stk.push(str[i]);
            else if(str[i]=='>' && !stk.empty() && stk.top()=='<') {
                count+= 2;
                stk.pop();
            }
            if(stk.empty())
                break;

        }
        cout<<count<<endl;
    }
}