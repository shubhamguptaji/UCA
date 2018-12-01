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
        int count = 0;
        for (int i = 11; i >= 0; i--)
        {
            count += n / pow(2, i);
            n %= (int)(pow(2, i));
        }
        cout << count << endl;
    }
}