#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fa(i, x, n) for (int i = x; i < n; i++)
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
        int n,m;
        cin >> n >> m;
        int a = 1;
        while ((n > 0 || m > 0) && (n% 2 == m% 2))
        {
            a=a<<1;
            n/=2;
            m/=2;
        }

        cout << a << endl;
    }
}