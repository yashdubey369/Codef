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
        vpi a, b, c;
        f(i, n)
        {
            int x;
            cin >> x;
            a.pb({x, i});
        }
        f(i, n)
        {
            int x;
            cin >> x;
            b.pb({x, i});
        }
        f(i, n)
        {
            int x;
            cin >> x;
            c.pb({x, i});
        }

        sort(all(a));
        sort(all(b));
        sort(all(c));
        int ans = -1;
        for (int i = n - 1; i >= n - 3; i--)
        {
            for (int j = n - 1; j >= n - 3; j--)
            {
                for (int k = n - 1; k >= n - 3; k--)
                {
                    // cout<<a[i].fi<<" "<<a[i].se<<" "<<endl;
                    // cout<<b[j].fi<<" "<<b[j].se<<" "<<endl;
                    // cout<<c[k].fi<<" "<<c[k].se<<" "<<endl;
                    if (a[i].se != b[j].se && a[i].se != c[k].se && b[j].se != c[k].se)
                    {   
                        // cout<<"."<<" ";
                        ans = max(ans, a[i].fi + b[j].fi + c[k].fi);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}