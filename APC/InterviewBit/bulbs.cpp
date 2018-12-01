#include <bits/stdc++.h>
using namespace std;

int bulbs(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        // cout << a[i] << " ";
        if (a[i] == 0 && count == 0)
        {
            count++;
            continue;
        }
        if (a[i] == 0 && count % 2 == 0)
        {
            count++;
        }
        else if (a[i] == 1 && count % 2)
            count++;
        // for (int j = 0; j < n; j++)
        // {
        //     cout << a[j] << " ";
        // }
        // cout << endl;
    }
    return count;
}

int main()
{
    int a[] = {1, 1, 0, 0, 1, 1, 0, 0, 1};
    cout << bulbs(a, 9);
    return 0;
}