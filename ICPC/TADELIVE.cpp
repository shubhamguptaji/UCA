#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int count = 0, j = 0, k = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i] && j < x)
        {
            j++;
            count += a[i];
        }
        else if (a[i] < b[i] && k < y)
        {
            k++;
            count += b[i];
        }
        else
        {
            if (r % 2 == 1 && j < x)
            {
                j++;
                count += a[i];
            }
            else if (r % 2 == 0 && k < y)
            {
                k++;
                count += b[i];
            }
            r++;
        }
    }
    cout << count << endl;
    return 0;
}