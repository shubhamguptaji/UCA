#include<stdio.h>
int n=4;
void matrixSearch(int a[][n], int m, int n, int s) {
    int mid, left=0, right=0,i,j;
    for(i=0;i<m;i++) {
        left=0;
        right=n;
        while(left<right) {
            mid = (left+right)/2;
            if(a[i][mid]==s){
                // return 1;
                printf("1");
                break;
            }
            else if(a[i][mid]<s) {
                left=mid+1;
            }
            else
                right=mid;
        }
        // printf("hello\n");
    }
    // return 0;
}

int main() {
    int a[3][4] = {1,2,2,3,4,4,6,7,8};
    matrixSearch(a, 1, 9, 1);
    return 0;
}