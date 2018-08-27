#include <stdio.h>
#include <stdlib.h>

void moveElements(int *a, int n)
{
    int count = 0;
    for (int i = 0; i < n+count; i++)
    {
        if (a[i] < 0)
        {
            printf("%d\n", a[i]);
            int temp = a[i];
            for (int j = i; j < n - 1; j++)
            {

                a[j] = a[j + 1];
            }
            count++;
            // if(a[i+1]<0)
            // i--;
            a[n - 1] = temp;
            if(a[i-1]<0 && i<n-count)
                i--;
        }
    }
}

int main()
{
    int a[] = {7, -6, 13, 10 ,15, 5, 2 , -8, -9, -1};
    moveElements(a, 10);
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
}