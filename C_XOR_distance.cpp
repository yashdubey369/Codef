#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fa(i, a, n) for (int i = a; i < n; i++)
#define f(i, n) fa(i, 0, n)
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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, r;
        cin >> a >> b >> r;
        if (a < b)
            swap(a, b);
        int ans = a - b, cnt = 0, mn = ans;
        for (int i = 60; i >= 0; i--)
        {
            if (((b >> i) & 1) == 0 && ((a >> i) & 1) == 1 && cnt + (1ll << i) <= r)
            {
                if (ans >= 2 * (1ll << i))
                {
                    cnt += (1ll << i);
                    ans -= 2 * (1ll << i);
                }
                else
                    mn = min(mn, 2 * (1ll << i) - ans);
            }
        }
        cout << min(ans, mn) << "\n";
    }
}