#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int j;
    for(int i=0;i<n;i++) 
        scanf("%d", &a[i]);
    for(int i=1;i<n;i++) {
        int b=a[i];
        int c=i;
        while(c>0&&a[c-1]>b) {
            a[c]=a[c-1];
            c--;
        }
        a[c]=b;
    }
    for(int i=0;i<n;i++)
        printf("%d ", a[i]);
    return 0;
}