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
        char a[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        int count = 0;
        int right[n][n];
        int bottom[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                if (a[i][j] == '.')
                    right[i][j] = (j != n - 1) ? right[i][j + 1] : 1;
                else
                    right[i][j] = 0;
                if (a[j][i] == '.')
                    bottom[j][i] = (j != n - 1) ? bottom[j + 1][i] : 1;
                else
                    bottom[j][i] = 0;
            }
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (right[i][j] == 1 && bottom[i][j] == 1)
                    count++;
        cout << count << endl;
    }
    return 0;
}