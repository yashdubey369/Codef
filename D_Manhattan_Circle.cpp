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
typedef vector<char> vc;
typedef vector<pi> vpi;
typedef vector<vc> vvc;

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
        vvc v(n,vc(m));
        f(i,n){
            f(j,m){
                cin>>v[i][j];
            }
        }
        int mxh=0;
        int x=0,y=0;
        for(int j=0;j<m;j++){
            int cnt=0;
              for(int i=0;i<n;i++){
                if(v[i][j]=='#') cnt++;
              }
              if(mxh<cnt){
                mxh=cnt;
                y=j+1;
              }
        }
        int mxv=0;
        for(int i=0;i<n;i++){
            int cnt=0;
              for(int j=0;j<m;j++){
                if(v[i][j]=='#') cnt++;
              }
            if(mxv<cnt){
                mxv=cnt;
                x=i+1;
            }
        }
        cout<<x<<" "<<y<<endl;
    }
}