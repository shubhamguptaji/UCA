#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,k, flag=0;
        vector<string> v;
        cin>>n>>k;
        string a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int m;
        for(int i=0;i<k;i++) {
            cin>>m;
            string str;
            for(int i=0;i<m;i++) {
                cin>>str;
                v.push_back(str);
            }
        }
        for(int i=0;i<n;i++) {
            flag=0;
            for(int j=0;j<v.size();j++) {
                if(a[i]==v[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1) {
                cout<<"YES"<<" ";
            }
            else {
                cout<<"NO"<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}