#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fa(i, a, n) for (int i = a; i < n; i++)
#define f(i, n) fa(i, 0, n)
#define frev(i, n) for (int i = n - 1; i >= 0; i--)
#define fitr(i, m) for (auto i : m)
#define inp(x)                         \
    for (int i = 0; i < x.size(); i++) \
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
        int k = (n * (n - 1)) / 2;
        vi a(k);
        inp(a);
        sort(all(a));
        int y = n - 1, i = 0;
        vi ans;
        while (i < k)
        {
            ans.pb(a[i]);
            i += y;
            y--;
        }
        ans.pb(ans.back());
        f(i, n) cout << ans[i] << " ";
        cout << endl;
    }
}