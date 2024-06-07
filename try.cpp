#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = 0;
    sort(v.begin(), v.end());
    for (int i = 0; i < n / 2; i++)
    {
        ans += v[n - 1 - i] - v[i];
    }
    if (n & 1)
        ans += v[n / 2];
    cout << ans << endl;
}
