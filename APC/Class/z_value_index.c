#include <stdio.h>
#include <string.h>

int *zValueIndex(char *str)
{
    int z[100];
    int len = strlen(str);
    int l = 0, r = 0,k;
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
            k - i - l;
            if (z[k] < r - i + 1)
                z[i] = z[k];
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
    char *str = "aaabcxyaaaabczaaczabbaaaaaabc";
    char *b = "aaabc";
    int *arr = zValueIndex(str);
    for(int i=0;i<20;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}