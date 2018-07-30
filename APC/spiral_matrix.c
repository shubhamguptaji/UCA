#include<stdio.h>
int main() {
    int A[5][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25 };
    int n11=5,n12=5;
    int i,j,k,l;
    int top=0;
    int bottom = n11-1;
    int left=0;
    int right=n12-1;
    while(left<=right && top<=bottom) {
        for(i=left;i<=right;i++) 
            printf("%d ",A[top][i]);
        top++;
        for(i=top;i<=bottom;i++)
            printf("%d ",A[i][right]);
        right--;
        for(i=right;i>=left;i--) 
            printf("%d ",A[bottom][i]);
        bottom--;
        for(i=bottom;i>=top;i--)
            printf("%d ",A[i][left]);
        left++;

    }
    // for(i=0;i<ceil(min(n11,n12)/2);i++) {
    //     for(j=0+i;j<n12;j++) {
    //         printf("%d ",A[i][j]);
    //     }
    //     for(k=i+1;k<n11;k++) {
    //         printf("%d ",A[k][j]);
    //     }
    //     for(l=j-1;j>=0;l--) {
    //         printf("%d ",A[k][l]);
    //     }
    //     for(k;k>i;k--) {
    //         printf("%d ",A[k][l] );
    //     }
    //     n11--;
    //     n12--;
    // }
    // for(i=0;i<n11;i++) 
    //     for(j=0;j<n12;j++) 
    //         printf("%d ", A[i][j]);
    // for(i=0;i<n11;i++) 
    //     for(j=0;j<n12;j++) 
    //         printf("%d ", A[i][j]);
    return 0;
}