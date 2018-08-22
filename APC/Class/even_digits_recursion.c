#include <stdio.h>
int evenDigits(int n)
{
    int result;
    int j = n % 10;
    if (j % 2 == 0)
    {
        result = result *10 + j;
        printf("%d",result);
    }
    return evenDigits(n / 10);
}
int main()
{
    printf("%d", evenDigits(84356));
    return 0;
}