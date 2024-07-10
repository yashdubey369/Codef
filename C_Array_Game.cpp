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
        int n,d;
        cin>>n>>d;
        vi a(n);
        inp(a);
        if(d>=3) {
            cout<<0<<endl;
            continue;
        }
        sort(all(a));
        int ans = *min_element(a.begin(), a.end());
        
        if(d==1) {
        fa(i,1,n){
            //  cout<<'y'<<" ";
            //  cout<<a[i]<<endl;
            ans=min(ans,abs(a[i]-a[i-1]));
            
        }
            cout<<ans<<endl;
            continue;
        } 
            int mn=0,k;
        f(i,n){
            fa(j,i+1,n){
            mn=(abs(a[i]-a[j]));
          
            ans=min(ans,mn);
            k=lower_bound(all(a),mn)-a.begin();
            // cout<<a[k]<<" ";
            if(a[k]==mn){
                ans=0;
                break;
            }
            if(k==0){
                ans=min(ans,abs(mn-a[k]));
            }
            else{
                ans=min(ans,min(abs(mn-a[k]),abs(mn-a[k-1])));
            }
        }
        
        }
            cout<<ans<<endl;

    }
}