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
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long long left_min[n], left_max[n];
        long long right_min[n], right_max[n];
        left_max[0] = left_min[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            left_max[i] = max(a[i], left_max[i - 1] + a[i]);
            left_min[i] = min(a[i], left_min[i - 1] + a[i]);
        }
        right_max[n - 1] = right_min[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            right_max[i] = max(a[i], right_max[i + 1] + a[i]);
            right_min[i] = min(a[i], right_min[i + 1] + a[i]);
        }
        long long res = 0;
        for (int i = 0; i < n - 1; i++)
        {
            res = max(res, abs(left_max[i] - right_min[i+1]));
			res = max(res, abs(left_min[i] - right_max[i+1]));
        }
        cout << res << endl;
    }
    return 0;
}