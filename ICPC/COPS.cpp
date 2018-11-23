#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, x, y;
        int a[n];
        cin>>n>>x>>y;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a, a+n);
        int count=0;
        for(int i=0;i<n;i++) {
            if(a[i]-(x*y)>0) {
                if(i==0) {
                    int temp = a[i] - (x*y);
                    count += temp;
                // cout<<count<<" ";

                }
                else {
                 count += a[i] -(x*y) - a[i-1] - (x*y);
                // cout<<count<<" ";
                }
            }
            if(100 - (x*y) - a[i] > 0 ) {
                count += 100  - a[i] - (x*y);
                // cout<<count<<" ";
            }
        }
        cout<<count<<endl;
    }
    return 0;
}