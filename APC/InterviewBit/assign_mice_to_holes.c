#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int comp1(void *x, void *y)
{
    return *((int *)x) - *((int *)y);
}
int holes(int a[], int b[], int n)
{
    qsort(a, n, sizeof(int), comp1);
    qsort(b, n, sizeof(int), comp1);
    int max = 0, diff;
    for (int i = 0; i < n; i++)
    {
        diff = abs(b[i] - a[i]);
        if (max < diff)
        {
            max = diff;
        }
    }
    return max;
}

int main()
{
    int a[] = {-49, 58, 72, -78, 9, 65, -42, -3};
    int b[] = {30, -13, -70, 58, -34, 79, -36, 27};
    printf("%d\n", holes(a, b, 8));
    return 0;
}