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
#define allr(x) x.rbegin(), x.rend()
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
        int n, k;
        cin >> n >> k;
        vi a(n), l(k, -1);
        inp(a);
        unordered_map<int, vector<int>> m;
        f(i, n)
        {
            m[a[i] - 1].pb(i - l[a[i] - 1] - 1);
            l[a[i] - 1] = i;
        }
        f(i, k)
        {
            m[i].pb(n - l[i] - 1);
        }
        int ans = n;
        fitr(i, m)
        {
            sort(all(i.se));
            int j = i.se[i.se.size() - 1] / 2;
            int y = j;
            if (i.se.size() > 1)
                ans = min(ans, max(j, i.se[i.se.size() - 2]));
        }
        cout << ans << endl;
    }
}