#include <stdio.h>
int countNum(int *a, int n, int b, int mid)
{
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (a[i] > mid)
        {
            // printf("%d ", a[i]);
            count++;
            continue;
        }
        else if (sum > mid)
        {
            i--;
            count++;
            // printf("%d ",sum);
            sum = 0;
        }
    }
    if (count >= b)
        return count;
    else
        return 0;
}
int booksALlocate(int *A, int b, int n)
{
    int left = 0, mid, right = 0, sum, i, max = 0;
    for (i = 0; i < n; i++)
    {
        right += A[i];
        if (max < A[i])
            max = A[i];
    }
    while (left < right && left < right - 1)
    {
        printf("%d ", right);

        mid = (left + right) / 2;
        int count = countNum(A, n, b, mid);
        if (count)
        {
            left = mid;
        }
        else
            right = mid - 1;
        printf("%d %d ", left, right);
        printf("\n");
    }
    if (right < max)
        return max;
    else
        return right;
}
int main()
{
    int a[] = {97, 26, 12, 67, 10, 33, 79, 49, 79, 21, 67, 72, 93, 36, 85, 45, 28, 91, 94, 57, 1, 53, 8, 44, 68, 90, 24};
    int b = booksALlocate(a, 26, 27);
    printf("\n%d", b);
    return 0;
}