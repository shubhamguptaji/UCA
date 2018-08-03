#include <stdio.h>
int lowerBound(int a[], int n, int num) {
    int left=0, right=n,mid;
    while (left < right)
    {
        mid = (left + right) / 2;
        if (a[mid] >= num)
        {
            // printf("Found at %d\n", mid);
            // lowerBound(a, mid, n);
            right = mid;
        }
        else
            left = mid + 1;
    // printf("%d %d %d\n ",left, mid, right);
    }
    return mid;
}
int upperBound(int a[], int n, int num) {
    int left=0, right=n,mid;
    while (left < right)
    {
        mid = (left + right) / 2;
        if (a[mid] <= num)
        {
            // printf("Found at %d\n", mid);
            // lowerBound(a, mid, n);
            left = mid + 1;
        }
        else
            right = mid;
    // printf("%d %d %d\n ",left, mid, right);
    }
    return right;
}
int main()
{
    int n = 14;
    // scanf("%d",&n);
    int a[20] = {1, 1, 2, 2, 2, 3, 3, 3, 5, 5, 5, 6, 6, 6};
    // for(int i=0;i<n;i++)
    // scanf("%d",&a[i]);
    int num =5, flag = 0;
    // scanf("%d", &num);
    printf("%d\n",lowerBound(a,n,num));
    printf("%d\n",upperBound(a,n,num));

    // if (!flag)
    //     printf("number does not exists");
    return 0;
}