#include <stdio.h>
#include <stdlib.h>

void maxArray(int *a, int n)
{
    int sum = 0, max = 0, l = 0, m = 0, maxl = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= 0)
        {
            l++;
            sum += a[i];
            if (max < sum)
            {
                max = sum;
                m = i;
                if (l == 1)
                {
                    maxl = i;
                } 
            }
        }
        else
        {
            l = 0;
            sum = 0;
            // l = i;
            // m = 0;
        }
    }
    printf("%d %d ", m, maxl);
}

int main()
{
    int a[] = {1, 2, 5, -7, 2, 3};
    maxArray(a, 6);
    return 0;
}