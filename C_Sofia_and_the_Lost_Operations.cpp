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

        int n,k=1;
        cin >> n;
        vi a(n), b(n);
        inp(a);
        inp(b);
        int m;
        cin >> m;
        vi d(m);
        inp(d);
        map<int, int> m1, m2 ;
        f(i, n)
        {
            m2[b[i]]++;
            if (a[i] != b[i])
                m1[b[i]]++;
        }

        int flag = 0;
        frev(i, m)
        {
            if (m1[d[i]])
            {
                m1[d[i]]--;
                flag = 1;
            }
            if (m2[d[i]])
            {
                flag = 1;
            }
            if (!flag)
            {
                 k=0;
                 break;
            }
        }
        fitr(i, m1)
        {
            if (i.se > 0)
            {
                k=0;
                break;
            }
        }
        // fitr(i,m1) cout<<i.fi<<" ";
        // cout<<endl;
        // fitr(i,m2) cout<<i.fi<<" ";
        // cout<<endl;

        if(k) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
        return 0;
}