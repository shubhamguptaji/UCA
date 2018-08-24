#include<stdio.h>
int search(int a[], int left, int right, int s) {
    if(left>right)
        return -1;
    int mid = (left+right)/2;
    if(a[mid]==s)
        return mid;
    if(a[left]<=a[mid]) {
        if(s>=a[left] && s<=a[mid]) {
           return search(a,left,mid-1,s);
        }
        else {
            return search(a,mid+1,right,s);
        }
    }
    if(s>a[mid] && s<=a[right]) {
        return search(a,mid+1,right,s);
    }
    return search(a,left,mid-1,s);

}

int main() {
    int a[]= {4,5,6,7,8,9,1,2,3};
    int b = search(a,0,9,6);
    printf("%d ", b);
    return 0;
}