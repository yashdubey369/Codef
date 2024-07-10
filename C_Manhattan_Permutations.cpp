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
        int n,k,mx=0;
        cin>>n>>k;
        vi a;
        fa(i,1,n+1){
            a.pb(i);
            mx+=abs(i-(n-i+1));
        }
        if(k>mx||k&1) {
            cout<<"NO"<<endl;
            continue;
        }
        int l=k/2;
        int i=0,r=n-1;
        while(i<r && l>0){
            if(r-i<=l){
                swap(a[i],a[r]);
                l-=r-i;
                i++;
                r--;
                continue;
            }
            swap(a[i],a[i+l]);
            l=0;
            
        }
        cout<<"Yes"<<endl;
        f(i,n) cout<<a[i]<<" ";
        cout<<endl;
    }
}
//  1 2 3 4 5 6
//  6 4 3 2 5 1  
//  1 1 1 3 0=6
