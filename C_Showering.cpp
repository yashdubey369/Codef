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
        int n, s, m;
        cin >> n >> s >> m;
        vpi a;
        vi v;
        f(i, n)
        {
            int x, y;
            cin >> x >> y;
            a.pb({x, y});
        }
        int k = 0;
        for (int i = 0; i <= m; i)
        {
            if (a[k].fi == i)
            {   
                i = a[k].se + 1;
                v.pb(a[k].fi);
                k++;
            }
            else
            {   
                v.pb(i);
                i++;
            }
        }
        int cnt = 1, ans = 0;
        // cout <<v[0]<< " ";
        fa(i, 1, v.size())
        {
            // cout << v[i] << " ";
            if (v[i] == (v[i - 1] + 1))
            {
                cnt++;
                // cout<<cnt<<" ";
            }
            else
            {
                cnt = 1;
            }
            ans = max(cnt, ans);
        }
        // cout<<ans<<" ";
        if (ans >= s)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}