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
        int n;
        cin >> n;
        int a[n];
        if (n == 2)
            cout << 2 << " " << 1 << endl;
        if (n == 1)
            cout << 1 << endl;
        if (n >= 3)
        {
            
            int y = 3;
            for (int i = 0; i < n; i++)
            {
                if (i == 0)
                    a[0] = 3;
                else if (i == n - 1)
                    a[i] = 2;
                else if (i == n / 2)
                    a[i] = 1;
                else
                {
                    a[i] = y + 1;

                    y++;
                }
            }
            for (auto &i : a)
                cout << i << " ";
            cout << endl;
        }
    }
}