#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fa(i, a, n) for (int i = a; i < n; i++)
#define f(i, n) fa(i, 0, n)
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
        int n,m;
        cin>>n>>m;
        vi a(n),b(n);
        inp(a);
        inp(b);
        int ans=0,sum=0,mx=INT_MIN;
        f(i,min(n,m)){
            sum+=a[i];
            mx=max(b[i],mx);
            ans=max(ans,sum+mx*(m-1-i));
        }
        cout<<ans<<endl;




    }
}