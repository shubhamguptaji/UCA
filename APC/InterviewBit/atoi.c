#include <stdio.h>
#include <string.h>

int atoi(const char *a)
{
    char b[] = "2147483647";
    int num = 0, i;
    char c[] = "";
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
            c[i] = a[i];
        else
            break;
    }
    if (strlen(c) > strlen(b))
        return 2147483647;
    if (strcmp(c, b) == 1)
        return 2147483647;
    else if (strcmp(c, b) < 1)
    {
        for (i = 0; i < strlen(a); i++)
            num = num * 10 + (a[i] - '0');
    }
    return num;
    // if(num>INT_MAX)
    //     return 2147483647;
    //     return num;
}

int main()
{
    char a[] = "5121478262 8070067M75 X199R 547 8C0A11 93I630 4P4071 029W433619 M3 5 14703818 776366059B9O43393";
    printf("%d", atoi(a));
    return 0;
}