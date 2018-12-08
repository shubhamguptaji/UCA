#include <stdio.h>

int *plusOne(int *A, int n1, int *len1)
{
    int i, count = 0;
    for (i = 0; i < n1; i++)
    {
        if (A[i] != 0)
            break;
        count++;
    }
    if (count == n1)
    {
        n1 = 1;
        count = 0;
    }
    int *a = (int *)malloc(sizeof(int) * (n1 - count));
    int carry = 1;
    for (i = n1 - 1; i >= count; i--)
    {
        a[i] = A[i] + carry;
        // printf("%d arr %d\n",arr[i],count);
        if (a[i] > 9)
        {
            a[i] = 0;
            carry = 1;
        }
        else
        {
            carry = 0;
            // break;
        }
    }

    int *b;

    if (carry == 1)
    {

        b = (int *)malloc(sizeof(int) * (n1 - count + 1));
        for (i = n1 - 1; i >= count; i--)
        {
            b[i] = a[i];
        }
        b[0] = 1;
        for (i = 0; i < n1 - count + 1; i++)
            printf("%d ", b[i]);
    }
    else
    {
        for (i = count; i < n1; i++)
            printf("%d ", a[i]);
    }

    return a;
}