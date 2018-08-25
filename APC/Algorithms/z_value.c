#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *getZvalueArray(char *str, int *z)
{
    int len = strlen(str);
    int l = 0, r = 0, k;
    for (int i = 1; i < len; i++)
    {
        if (i > r)
        {
            l = i;
            r = i;
            while ((r < len) && (str[r - l] == str[r]))
                r++;
            z[i] = r - l;
            r--;
        }
        else
        {
            k = i - l;
            if (z[k] < r - i + 1)
            {
                z[i] = z[k];
            }
            else
            {
                l = i;
                while ((r < len) && (str[r - l] == str[r]))
                    r++;
                z[i] = r - l;
                r--;
            }
        }
    }
    return z;
}

int main()
{
    char a[] = "aabxaabxcaabxaabxay";
    char b[] = "aabx";
    int len = strlen(a);
    int *z = (int *)malloc(sizeof(int) * len);
    int *arr = getZvalueArray(a, z);
    for (int i = 1; i < len; i++)
        printf("%d ", arr[i]);
    return 0;
}