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
        int a,b,c;
        cin>>a>>b>>c;
        vi d;
        d.pb(a);
        d.pb(b);
        d.pb(c);
        sort(all(d));
        int s=d[0]+d[1]+d[2];
        // cout<<s<<endl;
        if((s%2!=0)) cout<<-1<<endl;
        else{
            if(d[0]+d[1]<(s/2)){
                cout<<(d[0]+d[1])<<endl;
            }
            else cout<<s/2<<endl;
        }
        
    }
}