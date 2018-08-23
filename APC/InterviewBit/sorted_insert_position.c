#include<stdio.h>

void sortedInsert(int* a, int n, int num) {
    int left=0,right=n, mid,flag=0;
    while(left<right) {
        mid=(left+right)/2;
        if(a[mid]>=num){
            right=mid;
        }
        else
            left= mid+1;
        if(a[mid]==num)
            flag=1;
    }
    if(flag)
        printf("%d",right);
    else
        printf("%d",left);
}

int main() {
    int a[]={1,3,5,6};
    sortedInsert(a,4,7);
    return 0;
}