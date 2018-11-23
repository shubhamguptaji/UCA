#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        int flag=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            flag = flag + a[i];
        }        // cout<<flag;
        if(flag > k)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
}