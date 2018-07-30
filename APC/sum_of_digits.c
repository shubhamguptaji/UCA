#include<stdio.h>

int main() {
    int n, a[100];
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    int sum=0,b;
    for(int i=0;i<n;i++) {
        while(a[i]!=0) {
            b = a[i]%10;
            sum = sum + b;
            a[i] = a[i]/10;
        }
        printf("%d\n", sum);
        sum=0;
    }
    return 0;
}