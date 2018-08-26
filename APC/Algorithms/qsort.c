#include <stdio.h>
#include <stdlib.h>

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

int partition(int a[], int l, int h)
{
    int pivot = a[h];
    int i = l - 1;
    for (int j = l; j < h; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[h]);
    return i + 1;
}

void quickSort(int *a, int low, int high)
{
    if(low < high)
    {
        // printf("hello\n");
        int p = partition(a, low, high);
        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main()
{
    int a[] = {10, 80, 30, 90, 40, 50, 70};
    quickSort(a, 0, 6);
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}