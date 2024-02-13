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
        vi a(n), pre(n);
        inp(a);
        pre[0] = a[0];
        fa(i, 1, n)
        {
            pre[i] = pre[i - 1] + a[i];
        }
        int ans = 0;
        fa(k, 1, n)
        {
            if (n % k == 0)
            {
                int mx = pre[k - 1], mn = pre[k - 1];
                for (int i = 2 * k; i <= n; i += k)
                {
                    mx = max(mx, pre[i - 1] - pre[i - k - 1]);
                    mn = min(mn, pre[i - 1] - pre[i - k - 1]);
                }

                ans = max(ans, abs(mx - mn));
            }
        }
        cout << ans << endl;
    }
}