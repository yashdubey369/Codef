#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 1, cnte = 0;
        cin >> n;
        int a[n];
        while (n--)
        {
            int i;
            cin >> i;
            cnt *= i;
            cnte += i;
        }
        if (cnte >= 0)
        {
            if (cnt != -1)
            {
                cout << 0 << endl;
            }
            else
                cout << 1 << endl;
        }
        else
        {
            cnte = abs(cnte);
            int y = cnte / 2 + cnte % 2;
            if (y % 2 != 0)
            {
                cnt = -cnt;
            }
            if (cnt != -1)
                cout << y << endl;
            else
                cout << y + 1 << endl;
        }
    }
}