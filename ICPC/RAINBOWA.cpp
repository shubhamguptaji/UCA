#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, flag=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        for(int i=0;i<n/2;i++)
        {
            if(a[0]!=1 || a[n/2]!=7 || (a[i+1]-a[i])<0 || (a[i+1]-a[i])>1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1) {
            cout<<"no"<<endl;
            continue;
        }
        for(int i=0;i<=n/2;i++) {
            if(a[i] != a[n-i-1])  {
                flag = 0;
                break;
            }
            else 
            {
                flag=1;
            }
        }
        if(flag==1) {
            cout<<"yes"<<endl;
        }
        else {
            cout<<"no"<<endl;
        }
    }
    return 0;
}