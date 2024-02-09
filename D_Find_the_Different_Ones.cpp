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
        cin>>n;
        vi a(n),b(n);
        inp(a);
        b[0]=-1;
        fa(i,1,n){
            if(a[i]==a[i-1]) b[i]=b[i-1];
            else b[i]=i-1;
        }
        int q;
        cin>>q;
        f(i,q){
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            if(b[r]<l) cout<<-1<<" "<<-1<<endl;
            else cout<<r+1<<" "<<b[r]+1<<endl;
        }
        cout<<endl;
            
    }
}