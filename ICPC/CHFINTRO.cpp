#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, r;
    cin >> n >> r;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= r)
            cout << "Good boi" << endl;
        else
            cout << "Bad boi" << endl;
    }
    return 0;
}