#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fa(i, a, n) for (int i = a; i < n; i++)
#define f(i, n) fa(i, 0, n)
#define frev(i, n) for (int i = n - 1; i >= 0; i--)
#define fitr(i, m) for (auto i : m)
#define inp(x, n)               \
    for (int i = 1; i < n; i++) \
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
        int n, k, q;
        cin >> n >> k >> q;
        vi a(k + 1), b(k + 1), c(q);
        inp(a, k + 1);
        inp(b, k + 1);
        f(i, q)
        {
            cin >> c[i];
        }
        f(i, q)
        {
            int x = c[i];
            if (x == 0)
            {
                cout << 0 << " ";
                continue;
            }
            int ans;
            int l = lower_bound(all(a), x) - a.begin();
            if (a[l] == x)
            {
                cout << b[l] << " ";
                continue;
            }
            int y, d, p, q;
            y = a[l - 1];
            p = b[l - 1];
            d = a[l];
            q = b[l];
            ans = p + (((x - y) * (q - p)) / (d - y));
            cout << ans << " ";
        }
        cout << endl;
    }
}