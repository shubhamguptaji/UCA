#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> k >> m;
        int a[n], b[n], white[k + m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < k + m; i++)
            cin >> white[i];
        int diff[n];
        for (int i = 0; i < n; i++)
            diff[i] = a[i] - b[i];
        sort(white, white + k + m, greater<int>());
        sort(diff, diff + n, greater<int>());
        int p = 0;
        int q = 0;
        while (p < n && q < k + m)
        {
            if (diff[p] >= white[q])
            {
                diff[p] -= white[q];
                p++;
                q++;
            }
            else
                q++;
        }
        int count = 0;
        for (int i = 0; i < n; i++)
            count += diff[i];
        cout << count << endl;
    }
    return 0;
}