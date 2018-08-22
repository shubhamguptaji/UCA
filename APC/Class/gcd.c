#include<stdio.h>
int min(int a, int b) {
    return a<b?a:b;
}
int main() {
    int m=11,n=4;
    int gcd=1;
    for(int i=2;i<=min(m,n);i++) {
        while(m%i==0 && n%i==0) {
            gcd*=i;
            m/=i;
            n/=i;
        }
    }
    printf("%d\n", gcd);
    return 0;
}