#include <iostream>
#include <queue>

using namespace std;

int findMax(int a[], int strt, int end) {
    int i, max = INT_MIN;
    for(i=strt;i<=end;i++)
        if(a[i]>=max)
            max = a[i];
    return max;
}

void slidingWindowMax(int a[], int n, int w) {
    queue<int> q;
    int max = INT_MIN;
    for(int i=0;i<w;i++)
    {
        q.push(a[i]);
        if(a[i]>=max)
            max = a[i];
    }
    cout<<max<<" ";
    for(int i=w;i<n;i++) {
        int temp = q.front();
        q.pop();
        if(max == temp)
            max = findMax(a, i-w+1, i);
        if(a[i]>=max)
            max = a[i];
        q.push(a[i]);
        cout<<max<<" ";
    }
}

int main() {
    int a[] = {648, 614, 490, 138, 657, 544, 745, 582, 738, 229, 775, 665, 876, 448, 4, 81, 807, 578, 712, 951, 867, 328, 308, 440, 542, 178, 637, 446, 882, 760, 354, 523, 935, 277, 158, 698, 536, 165, 892, 327, 574, 516, 36, 705, 900, 482, 558, 937, 207, 368};
    int n = sizeof(a)/sizeof(a[0]);
    slidingWindowMax(a, n,9);
    return 0;
}