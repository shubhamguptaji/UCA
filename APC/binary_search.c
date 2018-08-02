#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) 
        scanf("%d",&a[i]);
    int num;
    scanf("%d", &num);
    int left=0, right=n-1, mid;
    while(left<=right) {
        mid = (left+right)/2;
        if(a[mid]==num)
        {
            printf("Found at %d", mid);
            return 0;
        }
        else if(a[mid]>num) {
            right = mid-1;
        }
        else
            left = mid+1;
    }
    printf("Not Found");
    
}