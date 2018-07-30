#include<stdio.h>
#include<stdlib.h>

int ** solve(int A, int *len1, int *len2) {
    int i,j;
    len1 = (int*)malloc(sizeof(int)*1);
    *len1 = A;
    len2 = (int*)malloc(sizeof(int) * A);
    int** a = (int**)malloc(sizeof(int*) * A);
    for(i=0;i<A;i++) {
        len2[i] = i + 1;
        a[i] = (int*)malloc(sizeof(int) * len2[i]);
        for(j=0;j<len2[i];j++) {
            if(i==j || j==0) {
                a[i][j]=1;
            }
            else {
                a[i][j] = a[i-1][j] + a[i-1][j-1];
            }
        }
    }
    for(i=0;i<A;i++) {
        for(j=0;j<len2[i];j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return a;
}

int main() {
    int *a, *b,c=5;
    solve(c,a,b);
    return 0;
}