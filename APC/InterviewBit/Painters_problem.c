#include <stdio.h>
int countNum(int *a, int n ,int b, int mid) {
    int sum=0,count=0;
    for(int i=0;i<n;i++) {
        sum+=a[i];
        if(a[i]>mid) {
            // printf("%d ", a[i]);
            count++;
            continue;
        }else if(sum>mid) {
            i--;
            count++;
            // printf("%d ",sum);
            sum=0;
        }
    }
    if(count >= b)
        return count;
    else
        return 0;
}
int Painters(int *A, int b, int n, int t)
{
    long long int left=0, mid, right=0, sum, i, max=0;
    for(i=0;i<n;i++) {
        right+=A[i];
        if(max<A[i])
            max =A[i];
    }
    while(left<right && left<right-1) {
    // printf("%d ", right);

        mid = (left+right)/2;
        int count = countNum(A,n,b,mid);
        if(count) {
            left=mid;
        }
        else
            right=mid;
        printf("%d %d ",left, right);
        printf("\n");
    }
    if(right<max)
        return (max*t)%10000003;
    else
        return (right*t)%10000003;
}
int main()
{
        int a[] = {1000000, 1000000};
    long long int b = Painters(a, 1, 2, 1000000);
    printf("\n%lld", b);
    return 0;
}