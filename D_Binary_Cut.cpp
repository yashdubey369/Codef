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
        string s;
        cin >> s;
        vector<int> v;
        int n = s.size(), cnt = 0, y = 0, flag = 1, ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (flag && s[i - 1]< s[i])
            {
                cnt++;
                y++;
                flag = 0;
            }
            if (s[i - 1] == s[i])
            {
                cnt++;
                y++;
            }
            else
            {
                y++;
                v.pb(cnt);
                cnt = 0;
            }
        }
        ans += v.size() + (n - y);
        // cout<<y<<" "<<v.size()<<" "<<n<<" "<<endl;
        cout << ans << endl;
    }
}