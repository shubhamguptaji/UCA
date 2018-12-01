#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int comp1(void *x, void *y)
{
    return *((int *)x) - *((int *)y);
}

unsigned int highestProduct(int a[], int n)
{
    qsort(a, n, sizeof(int), comp1);
    // for (int i = 0; i < n; i++)
    //     printf("%d ", a[i]);
    // printf("%d ", a[0] * a[1] * a[n - 1]);
    if ((a[0] * a[1] * a[n - 1]) > (a[n - 1] * a[n - 2] * a[n - 3]))
        return a[0] * a[1] * a[n-1];
    return a[n - 1] * a[n - 2] * a[n - 3];
}

int main()
{
    int a[] = {0, -1, 3, 100, -70, -50};
    printf("%d\n", -50 * -70);
    printf("%d\n", highestProduct(a, 6));
    return 0;
}