#include<stdio.h>
int main() {
    int a[5] = {0 ,0 ,1, 2, 3};
    int n=5, count=0;
    for(int i=0;i<n;i++) {
        if(a[i] == 0) {
            count++;
        }
        else {
            break;
        }
    }
    int b[n-count],j=0;
    for(int i=count;i<n;i++) {
        b[j] = a[i];
        j++;
    }
    b[n-count-1] += 1;
    for(int i=0;i<n-count;i++) {
        printf("%d", b[i]);
    }
    return 0;

}