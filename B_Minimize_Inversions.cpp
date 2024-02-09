#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fa(i,a,n) for (int i = a; i < n; i++)
#define f(i, n) fa(i,0,n)
#define inp(x) for(int i=0;i<n;i++) cin>>x[i];
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define evry(x) x.begin(), x.end()
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
        cin>>n;
        vi a(n),b(n);
        vpi y;
        inp(a);
        inp(b);
        f(i,n){
            y.pb({a[i],b[i]});
        }
        sort(evry(y));
        f(i,n){
            // cout<<a[i]<<" ";
            cout<<y[i].fi<<" ";
        }
        cout<<endl;

        f(i,n){
            cout<<y[i].se<<" ";
        }
        cout<<endl;
    }
}