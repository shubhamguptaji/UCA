#include <stdio.h>

int main()
{
    int a[3] = {2, 2, 2 };
    int i, j, k, l, min1, min2, max1, max2, diff, n=3;
    for (int i = 0; i < n; i++)
    {
        diff = a[i] - i;
        if (max1 < diff)
        {
            max1 = diff;
            k = i;
        }
        if (min1 > diff)
        {
            min1 = diff;
            l = i;
        }
    }
    if (a[k] >= a[l])
    {
        printf("%d", max1 - min1);
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            diff = a[i] + i;
            if (max2 < diff)
            {
                max2 = diff;
                k = i;
            }
            if (min2 > diff)
            {
                min2 = diff;
                l = i;
            }
        }
        printf("%d", max2-min2);
    }

    return 0;
}