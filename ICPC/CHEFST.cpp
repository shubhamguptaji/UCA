#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2, m;
        cin >> n1 >> n2 >> m;
        cout << max(n1 + n2 - ((m + 1) * m), max(n1 - n2, n2 - n1)) << endl;
    }
    return 0;
}