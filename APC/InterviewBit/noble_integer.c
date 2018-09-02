#include<stdio.h>
#include<stdlib.h>

int comp(const void* a, const void* b){
    return *(int*)a-*(int*)b;
}

int nobleInteger(int *a, int n) {
    qsort(a,n,sizeof(int),comp);
    for(int i=0;i<n;i++){
        printf("%d %d %d\n",i,n-i-1,a[i]);
        if(a[i]==n-i-1 && (a[i]<a[i+1] || i==n-1)) 
            return 1;
    }
    return -1;

}

int main() {
    int a[]= {-2, 8, 8, 6, -2, 3, -2, -7, 3, 3, -2, 0, 4, -3, -4, -2, -1, -10, -4, -2, 7, -1, 0, -7, 3, -7, 7, 3, 2, -4, -5, 2, 6, 5, -2, 7, -1, 6, -10, 4, -9, -10, -6, -2, -3, 0, -2, 6, -8, 4, 7, 9, -7, 9, -8, -2, -7, -10, -9, -3, 8, 9, 1, 5, 4, 9, 2, 5, -3, -6, -1, -1, -6 };
    printf("\n%d ", nobleInteger(a,73));
    return 0;
}