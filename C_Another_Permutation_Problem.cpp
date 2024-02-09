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
        if (n == 2)
        {
            cout << 2 << endl;
            continue;
        }
        int a[n];
        int i = 1;
        while (i <= n)
        {
            a[i - 1] = i;
            i++;
        }
        int ans = -1e9;
        i = 0;
        while (i < n)
        {
            int y[n];
            int s = 0,mx=-1e9;
            reverse(a + i, a + n);
            for (int i = 0; i < n; i++)
            {
                y[i] = (a[i] * (i + 1));
                mx=max(mx,y[i]);
            }
            for (int i = 0; i < n; i++)
            {
                s += y[i];
            }
            s -= mx;
            ans = max(ans, s);
            reverse(a + i, a + n);
            i++;
        }
        cout << ans << endl;
    }
}