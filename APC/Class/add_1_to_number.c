#include<stdio.h>
#include<math.h>
int main() {
    int n, a[100];
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++) {
        int b=0;
        int sum=a[i];
        while(sum!=0) {
            a[i] = a[i] + pow(10,b);
            b++;
            sum/=10;
        }
        printf("%d\n", a[i]);
    }
}