#include <bits/stdc++.h>
using namespace std;
int res;

void mergeSort(int start, int end, int index) {
    if(start>index || end<index)
        return;
    res++;
    cout<<start<<" "<<end<<endl;
    if(start==end)
        return;
    int mid = (start + end) / 2;
    mergeSort(start, mid, index);
    mergeSort(mid+1, end, index);
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int  s, t, in;
        cin>>s>>t>>in;
        res = 0;
        mergeSort(s, t, in);
        if(!res) {
            res = -1;
        }
        cout<<res<<endl;
    }
}