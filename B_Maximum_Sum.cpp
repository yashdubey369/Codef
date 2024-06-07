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
        
        int n,k,mod=1e9+7;
        cin>>n>>k;
        vi a(n);
        inp(a);
        int sum=0,maxi=0,curr=0;
        f(i,n){
            sum+=a[i];
            curr+=a[i];
            curr=max(0LL,curr);
            maxi=max(maxi,curr);
        }
        sum=(sum%mod+mod)%mod;
        maxi=maxi%mod;
        int t=1;
        for(int i=0;i<k;i++){
            t=t*2%mod;
        }
        cout<<(sum+((t)*maxi)-maxi+mod)%mod<<endl;
    }
}