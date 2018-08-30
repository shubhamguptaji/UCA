#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void trim(char *s)
{
    if (s == NULL)
    {
        s = "0";
        return;
    }
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '0')
            break;
        else
        {
            for (int j = i; j < n - 1; j++)
                s[j] = s[j + 1];
            i--;
            n--;
        }
    }
    if (n == 0)
    {
        s[0] = '0';
        s[1] = '\0';
    }
    else
        s[n] = '\0';
}

int compareVersion(char *a, char *b)
{
    char *m = strtok_r(a, ".", &a);
    char *n = strtok_r(b, ".", &b);
    trim(m);
    trim(n);
    while (m != NULL || n != NULL)
    {
        printf("%s\t%s\n", m, n);
        m = strtok_r(a, ".", &a);
        n = strtok_r(b, ".", &b);
        trim(m);
        trim(n);
    }
    return 0;
}

int main()
{
    char a[] = "13.001";
    char b[] = "13.1.2";
    // trim(a);
    int c = compareVersion(a, b);
    // printf("%s\n%d", a, strlen(a));
    return 0;
}