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
        int n, k, sum = 0, sqsum = 0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            sqsum += a[i] * a[i];
        }
        k = (k - sqsum) / (4 * n);

        sum = sum / (2 * n);
        int res = floor(sqrtl(sum * sum + k)) - sum;

        cout << res << endl;
    }
}