#include <bits/stdc++.h>

using namespace std;

int atomicMass(char a) {
    if(a=='C')
        return 12;
    if(a=='H')
        return 1;
    if(a=='O')
        return 16;
}

int main() {
    string str;
    cin>>str;
    stack<int> stk;
    int mass = 0;
    for(int i=0;i<str.length();i++) {
        if(isdigit(str[i])) {
            int temp = stk.top();
            stk.pop();
            stk.push(temp * (str[i] - '0'));
        }
        else if(str[i]=='(')
            stk.push(-1);
        else if(str[i] == ')') {
            int t=0;
            while(stk.top()!= -1) {
                t += stk.top();
                stk.pop();
            }
            stk.pop();
            stk.push(t);
        }
        else if(isalpha(str[i]))
            stk.push(atomicMass(str[i]));
    }
    while(!stk.empty()) {
        mass += stk.top();
        stk.pop();
    }
    cout<<mass;
}