#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int comp1(void* x, void* y) {
    return *((int*)y) - *((int*)x);
}
void largestNumber(int* a, int n) {
    int k=0;
    int b[10],count[10] = {0};
    for(int i=0;i<n;i++) {
        b[i]=a[i];
    }
    for(int i=0;i<n;i++) {
        while(b[i]>10) {
            b[i]/=10;
            count[i]++;
        }
    }
    // qsort(b,5,sizeof(int),comp1);
    // for(int i=0;i<n;i++) {
    //     printf("%d ",count[i]);
    // }

    int max=0;
    long long int num=0;
    for(int j=0;j<n;j++) {
    for(int i=0;i<n;i++){
        if(b[i]>max)
            max=i;
    }
    printf("%d ",a[max]);
    num = num * pow(10,count[max]+1) + a[max];
    b[max]=0;
    max=0;
    }
    printf("%lld",num);

}

int main() {
    int a[]= {3,30,34,5,9};
    largestNumber(a,5);
    return 0;
}