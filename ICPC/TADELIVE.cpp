#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> x, pair<int, int> y)
{
    if (x.first > y.first)
    {
        return true;
    }
    return false;
}

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    pair<int, int> c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        c[i] = {abs(a[i] - b[i]), i};
    }
    sort(c, c + n, compare);
    int count = 0, j = 0, k = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[c[i].second] > b[c[i].second])
        {
            if (j < x)
            {
                j++;
                count += a[c[i].second];
            }
            else if (k < y)
            {
                k++;
                count += b[c[i].second];
            }
        }
        else
        {
            if (k < y)
            {
                k++;
                count += b[c[i].second];
            }
            else if (j < x)
            {
                j++;
                count += a[c[i].second];
            }
        }
    }
    cout << count << endl;
    return 0;
}