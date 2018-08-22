#include<stdio.h>
int gcd(int a, int b) {
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}
int main() {
    int a=48,b=8,x;
    while(gcd(a,b)>1){
        x=(gcd(a,b));
        a/=x;
        // x=gcd(a,b);
    }
    printf("%d",a);
}