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
        int n;
        cin>>n;
        // cout<<n<<endl;
        vi a;
        while(n){
            a.pb(n%10);
            n/=10;
        }
        if(a[a.size()-1]!=1){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=a.size()-1;i>0;i--){
            // cout<<a[i]<<" ";
            a[i]-=1;
            a[i-1]+=10;
        }
        int mn=INT_MAX,mx=INT_MIN;
        for(int i=0;i<a.size()-1;i++){
            // cout<<a[i]<<" ";
            mn=min(mn,a[i]);
            mx=max(mx,a[i]);
        }
        // cout<<endl;
        if(mx<=18 && mn>=10){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}