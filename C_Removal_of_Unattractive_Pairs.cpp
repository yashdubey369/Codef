#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fa(i,a,n) for (int i = a; i < n; i++)
#define f(i, n) fa(i,0,n)
#define fit(i,x) for(auto i:x)
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
        int ans=INT_MIN,n;
        cin>>n;
        string s;
        cin>>s;
        // cout<<s<<endl;
        // int n=s.size();
        map<char,int> m;
        for(auto i:s){
            m[i]++;
        }
        for(auto i:m){
            ans=max(ans,i.second); 
            // cout<<i.first<<" "<<i.second<<endl;       
        }
        // cout<<ans<<endl
        if(ans>n/2)  
        cout<<abs(ans-(n-ans))<<endl;
        else {
            if(n&1) cout<<1<<endl;
            else cout<<0<<endl;
        }
        
        // cout<<endl;
    }
}