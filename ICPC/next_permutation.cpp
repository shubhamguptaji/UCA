#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    do {
        for(int i=0;i<n;i++)
            cout<<a[i]<< " ";
        cout<<endl;
    }while(next_permutation(a,a+n));
    return 0;
}