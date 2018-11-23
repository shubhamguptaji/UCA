#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--!=0) {
        int x, y, k, n, flag=0;
        cin>>x>>y>>k>>n;
            int c, p;
        while(n--!=0) {
            cin>>p>>c;
            if(c<=k && (x-y)<=p) {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"LuckyChef"<<endl;
        else
            cout<<"UnluckyChef"<<endl;
    }
}