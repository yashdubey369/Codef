#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fa(i,a,n) for (int i = a; i < n; i++)
#define f(i, n) fa(i,0,n)
#define frev(i,n) for(int i=n-1;i>=0;i--)
#define fitr(i,m) for(auto i:m)
#define inp(x) for(int i=0;i<n;i++) cin>>x[i];
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
        int n,k;
        cin>>n>>k;
        vector<string> v,ans;
        f(i,n){
            string s;
            cin>>s;
            v.pb(s);
            // cout<<v[i]<<endl;
        }
        for(int i=0;i<n;i+=k){
            string y="";
            for(int j=0;j<n;j+=k){
                y.pb(v[i][j]);
            }
            ans.pb(y);
        }
        for(auto i:ans){
            cout<<i<<endl;
        }

    }
}