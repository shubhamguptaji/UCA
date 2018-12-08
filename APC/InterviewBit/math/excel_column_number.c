#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char z[] = "AAA";
    int len = strlen(z);
    printf("%d ", len);
    int n = len, a = 0;
    for (int i = 0; i < len - 1; i++)
    {
        a += (int)(pow(26, --n) * (int)(z[i] - 64));
    }
    a += (int)(z[len - 1] - 64);
    printf("%d ", a);
    return 0;
}