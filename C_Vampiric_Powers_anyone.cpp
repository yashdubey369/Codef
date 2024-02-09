#include <bits/stdc++.h>
using namespace std;

#define int long long int
void yash()
{
    int n;
    cin >> n;
    int y[n];
    for (auto &i : y)
        cin >> i;
    // cout<<maxSubarrayXOR(n,y)<<endl;
    int d = 0, res = INT_MIN;
    int i=0;
    while(i<=n-1)
    {
        if (n == 1)
            cout << y[0] << endl;
        if (y[i] == y[i + 1])
            res = y[i];
        d = max(y[i], y[i] ^ d);
        res = max(res, d);
        ++i;
    }
    cout << res << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        yash();
    }
}