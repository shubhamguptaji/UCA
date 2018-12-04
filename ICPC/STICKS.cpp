#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, greater<int>());
        int max = 1, c = 0, breadth = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                max *= a[i];
                i++;
                c++;
            }
            if (c == 2)
                break;
        }
        if (c == 2)
            cout << max << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}