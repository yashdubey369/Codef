#include <bits/stdc++.h>
using namespace std;

#define int long long int
int edist(string s, string t, int n, int m, vector<vector<int>> &dp)
{
    if (n == 0)
        return m;
    if (m == 0)
        return n;
    if (dp[n][m] != -1)
        return dp[n][m];
    if (s[n - 1] == t[m - 1])
    {
        return dp[n][m] = edist(s, t, n - 1, m - 1, dp);
    }
    return dp[n][m] = 1 + min(edist(s, t, n - 1, m, dp), min(edist(s, t, n, m - 1, dp), edist(s, t, n - 1, m - 1, dp)));
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    for (int i = 0; i <= n; i++)
        dp[i][0] = i;
    for (int i = 0; i <= m; i++)
        dp[0][i] = i;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s[i - 1] == t[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1]));
        }
    }
    cout << dp[n][m] << endl;
    // cout << edist(s, t, n, m, dp) << endl;
}