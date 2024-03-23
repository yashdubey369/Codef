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
        int n, m;
        cin >> n >> m;
        deque<int> a;
        f(i,n){
            int x;
            cin>>x;
            a.push_back(x);
        }
        string s;
        cin >> s;

        int l = count(s.begin(), s.end(), 'L');
        int r = l, sum = 1;
        vi ans,v;
        f(i,n){
            if(s[i]=='L'){
                v.push_back(a.front());
                a.pop_front();
            }
            else{
                v.push_back(a.back());
                a.pop_back();

            }
        }
        reverse(v.begin(),v.end());
        int num = 1;
        f(i,n){
            num*=v[i];
            num%=m;
            ans.pb(num);
        }

        frev(i,n) cout<<ans[i]<<" ";
        cout << endl;
    }
}