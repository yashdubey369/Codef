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
        int n, k;
        cin >> n >> k;
        map<int, int> m1, m2;
        f(i, n)
        {
            int x;
            cin >> x;
            m1[x]++;
        }
        f(i, n)
        {
            int x;
            cin >> x;
            m2[x]++;
        }
        vi a, b;

        for (auto i : m1)
        {
            if (i.se == 2 && a.size() < 2 * k)
            {
                a.pb(i.fi);
                a.pb(i.fi);
            }
        }
        for (auto i : m2)
        {
            if (i.se == 2 && b.size() < 2 * k)
            {
                b.pb(i.fi);
                b.pb(i.fi);
            }
        }
        for (auto i : m1)
        {
            if (m2.find(i.fi) != m2.end() && a.size() < 2 * k && b.size() < 2 * k)
            {
                
                a.pb(i.fi);
                b.pb(i.fi);
            }
        }
        for (auto i : a)
            cout << i << " ";
        cout << endl;
        for (auto i : b)
            cout << i << " ";
        cout << endl;
    }
}