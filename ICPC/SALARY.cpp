#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        int min=INT_MAX, count=0, sum=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            sum += a[i];
            if(min>a[i])
            {
                min = a[i];
            }
        }
        count = sum - (n* min);
        cout<<count<<endl;
    }
    return 0;
}