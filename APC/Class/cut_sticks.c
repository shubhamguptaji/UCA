#include <stdio.h>
#include <stdlib.h>

int mini(int *a, int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min && a[i]>0)
        {
            min = a[i];
        }
    }
    // printf("\n%d\n",min);
    return min;
}
int *cutSticks(int n, int *lengths, int *result_size)
{
    int count = 0;
    int *a = (int *)malloc(sizeof(int) * n);
    int flag=0,j=0;
    while (count<n)
    {
        int b = mini(lengths, n);
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (lengths[i] == 0){
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag)
            break;

        for (int i = 0; i < n; i++)
            if (lengths[i] >= b)
            {
                // printf("%d ", lengths[i]);
                lengths[i] =lengths[i] - b;
                c++;
            }
        a[count]=c;
        // printf("%d\n",a[count]);
        count++;
    }
    *result_size = count;
    return a;
}

int main()
{
    int a[] = {5, 4, 4, 2, 2, 8};
    int n;
    int *b = cutSticks(6, a, &n);
    for (int i = 0; i < n; i++)
        printf("%d ", b[i]);
    return 0;
}