#include<stdio.h>

int* func(int*a, int n) {
    int sum=1;
    for(int i=0;i<n;i++) {
        sum*=a[i];
    }
    printf("%d",120/sum);
    return 0;
}

int main(){
    int a[]={3,1,2,5,3};
    int* b;
    b = func(a,5);
    return 0;
}