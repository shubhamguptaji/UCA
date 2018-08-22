#include <stdio.h>
int countStudents(int *A, int n, int mid)
{
    int num = 1, i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += A[i];
        if (A[i] > mid)
        {
            num++;
            continue;
            sum = 0;
        }
        else if (sum >= mid)
        {
            num++;
            sum = 0;
            i--;
        }
    }
    return num;
}
int numsum(int *A, int n, int mid)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += A[i];
        if (A[i] > mid)
        {
            sum = A[i];
        }
        else if (sum >= mid)
        {
            sum = sum - A[i];
            break;
        }
    }
    return sum;
}
int booksALlocate(int *A, int b, int n)
{
    int left = 0, right=0, mid, i, sum;
    // printf("%d %d ", n, b);
    for (i = 0; i < n; i++)
    {
        right += A[i];
        // printf("%d\n", right);
    }
    // printf("%d", right);
    while (left < right)
    {
        mid = (left + right) / 2;
        int c = countStudents(A, n, mid);
        // printf("hello\n");
        if (mid == right)
            break;
        sum = numsum(A, n, mid);
        // if (c == b)
        // {
        //     right = mid - 1;
        //     continue;
        // }
        if (sum > mid)
            right = mid - 1;
        else
            left = mid + 1;
        printf("%d\n\n", mid);
    }
    return right;
}
int main()
{
    int a[8] = {73, 58, 30, 72, 44, 78, 23, 9};
    int b = booksALlocate(a, 5, 8);
    printf("%d", b);
    return 0;
}