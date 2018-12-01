#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int comp1(void *x, void *y)
{
    return *((int *)x) - *((int *)y);
}

int majorityElement(int a[], int n)
{
    qsort(a, n, sizeof(int), comp1);
    int flr = floor(n / 2), i;
    for (i = 0; i <= flr; i++)
    {
        if (a[i] == a[i + flr])
        {
            break;
        }
    }
    return a[i];
}

int main()
{
    int a[] = {2, 1, 2};
    printf("%d\n", majorityElement(a, 3));
    return 0;
}