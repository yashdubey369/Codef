#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fa(i, a, n) for (int i = a; i < n; i++)
#define f(i, n) fa(i, 0, n)
#define frev(i, n) for (int i = n - 1; i >= 0; i--)
#define fitr(i, m) for (auto i : m)
#define inp(x)                  \
    for (int i = 0; i < n; i++) \
        cin >> x[i];
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef vector<vi> vvi;

int coin(int n, int target, vector<int> &coins,vector<vector<int>> &dp)
{
    if (n >0 && target == 0)
        return 1;
    if ((n <=0)||(n >= 0 && target < 0))
        return 0;
    if(dp[n][target]!=-1) return dp[n][target];
    int nottake=coin(n - 1, target, coins,dp),take=0;
    if (target >= coins[n - 1])
    {
        take=coin(n, target - coins[n - 1], coins,dp);
    }
    return dp[n][target]=take+nottake;
}
signed main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, mod = 1e9 + 7;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<vector<int>> dp(n+1,vector<int> (k+1,-1));
    cout << coin(n, k, v,dp);
}
