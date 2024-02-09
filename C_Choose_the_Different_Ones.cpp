#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fa(i,a,n) for (int i = a; i < n; i++)
#define f(i, n) fa(i,0,n)
#define inp(x) for(int i=0;i<x.size();i++) cin>>x[i];
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
        int n,m,k;
        cin>>n>>m>>k;
        vi a(n),b(m);
        inp(a);
        inp(b);
        sort(all(a));
        sort(all(b));
        int cnta=0,cntb=0;
        set<int> sa,sb ,s;
        f(i,n){
            if(a[i]<=k){
                sa.insert(a[i]);
                s.insert(a[i]);
            }
        }
         f(i,m){
            if(b[i]<=k){
                sb.insert(b[i]);
                s.insert(b[i]);
            }
        }
        if(sa.size()>=k/2&&sb.size()>=k/2 && s.size()==k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}