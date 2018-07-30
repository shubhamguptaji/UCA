#include <stdio.h>
#include <math.h>
int prime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else if (n == 2)
        return 1;
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                return 0;
        }
        return 1;
    }
}
int primeFactors(int n)
{
    if (prime(n))
    {
        printf("%d\n", n);
    }
    else
    {
        for (int i = 2; i < sqrt(n); i++)
        {
            if (n % i == 0)
            {
                primeFactors(i);
                primeFactors(n / i);
                break;
            }
        }
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    primeFactors(n);
    return 0;
}
