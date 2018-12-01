#include <bits/stdc++.h>
using namespace std;

// using  recursion
int fibonacci(int n)
{
    int result;
    if (n == 1 || n == 2)
        result = 1;
    else
        result = fibonacci(n - 1) + fibonacci(n - 2);
    return result;
}

// memoize approach

int fibonacci_memoize(int a[], int n)
{
    if (a[n] != -1)
        return a[n];
    int result;
    if (n == 1 || n == 2)
        result = 1;
    else
        result = fibonacci_memoize(a, n - 1) + fibonacci_memoize(a, n - 2);
    a[n] = result;
    return result;
}

// bottom up approach

int bottom_up_fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    int a[n + 1];
    a[1] = 1;
    a[2] = 1;
    for (int i = 3; i <= n; i++)
        a[i] = a[i - 1] + a[i - 2];
    return a[n];
}

int main()
{
    cout << fibonacci(15) << endl;
    int a[35];
    for (int i = 1; i <= 15; i++)
        a[i] = -1;
    cout << fibonacci_memoize(a, 15) << endl;
    cout << bottom_up_fibonacci(35) << endl;
    return 0;
}