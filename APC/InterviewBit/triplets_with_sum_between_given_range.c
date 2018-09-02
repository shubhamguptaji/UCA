#include<stdio.h>
#include<stdlib.h>

int min(int a, int b) {
    return a>b?a:b;
}

int solve(float* a, int n,int p, int q) {
    float sum=0,i;
    for(i=1;i<n;i++) {
        float j=a[i];
        float k= a[i-1];
        sum = j + k;

    }
    return -1;
}

int main() {
    float a[]= {0.6, 0.7, 0.8, 1.2, 0.4};
    printf("%d", solve(a,5,1,2));
    return 0;
}