#include<stdio.h>
#include<stdlib.h>
int comp1(void* x, void* y) {
    return *((int*)x) - *((int*)y);
}
int comp2(void* x, void* y) {
    return *((int*)y) - *((int*)x);
}
int main() {
    int a[6]={7,31,24,3,4,9};
    qsort(a,6,sizeof(int),comp1);
    for(int i=0;i<6;i++) {
        printf("%d\n", *(a+i));
    }
    printf("\n\n");
    qsort(a,6,sizeof(int),comp2);
    for(int i=0;i<6;i++) {
        printf("%d\n", *(a+i));
    }
    return 0;
}