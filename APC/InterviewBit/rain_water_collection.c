#include "stack_using_array.h"
int maxi(int  a, int b) {
    return a>b?a:b;
}
int mini(int a, int b) {
    return a<b?a:b;
}
int findWater(int* a, int n) {
    int left[n], right[n];
    left[0] = a[0];
    for(int i=1;i<n;i++) {
        left[i] = maxi(left[i-1], a[i]);
    }
    right[n-1] = a[n-1];
    for(int i=n-2;i>=0;i--) {
        right[i] = maxi(right[i+1], a[i]);
    }
    int res = 0;
    for(int i=0;i<n;i++) {
        res += mini(right[i], left[i]) - a[i];
    }
    return res;
}

int main() {
    int a[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    printf("%d ",findWater(a, 12));
    return 0;
}