#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 9247;
    int count = 0;
    int m = n, a = 0;
    while (count>=0)
    {
        if ((int)(m / pow(5, ++count)) > 0)
        {
            continue;
        }
        else
            break;
    }
    count--;
    while(count>0) {
        a+=(int)(n/pow(5,count--));
    }
    printf("%d",a);
    return 0;
}