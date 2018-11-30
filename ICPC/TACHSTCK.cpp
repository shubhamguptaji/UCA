#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a, a+n);
    int count = 0;
    for(int i=0;i<n;i++) {
        if(a[i+1]-a[i]<=d && i+1 < n) {
            count++;
            i++;
        } 

    }
    cout<<count<<endl;
    return 0;
}