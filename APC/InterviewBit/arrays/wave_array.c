#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int *waveArray(int *a, int n)
{
    qsort(a, n, sizeof(int), comp);
    int i;
    for (i = 0; i < n - 1; i+=2)
    {
        swap(&a[i], &a[i + 1]);
    }
    return a;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int *b = waveArray(a, 5);
    for (int i = 0; i < 5; i++)
        printf("%d ", b[i]);
    return 0;
}