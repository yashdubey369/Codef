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
        vi a(n);
        inp(a);
        map<pair<pi, int>, int> m;
        map<pi, int> m1, m2, m3;
        pair<pi, int> v;
        int ans = 0;
        for (int i = 0; i < n - 2; i++)
        {
            ans += m1[{a[i], a[i + 1]}];
            m1[{a[i], a[i + 1]}]++;
            ans += m2[{a[i], a[i + 2]}];
            m2[{a[i], a[i + 2]}]++;
            ans += m3[{a[i + 1], a[i + 2]}];
            m3[{a[i + 1], a[i + 2]}]++;
            v = {{a[i], a[i + 1]}, a[i + 2]};
            ans -= m[v] * 3;
            m[v]++;
        }
        
        cout << ans << endl;
    }
}