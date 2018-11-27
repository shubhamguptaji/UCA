#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        int flag = 0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(next_permutation(a, a+n))
            for(int i=0;i<n;i++)
                cout<<a[i];
        else
            cout<<"-1";
        cout<<endl;

    }
    return 0;
}