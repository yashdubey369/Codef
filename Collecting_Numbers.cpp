#include <bits/stdc++.h>
using namespace std;

#define int long long int
void solve(vector<pair<int, int>> v, int n)
{
    sort(v.begin(), v.end());
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i].second < v[i - 1].second)
            ans++;
    }
    cout << ans << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back({x, i});
    }
    solve(v, n);
}