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
        string s="abcdefghijklmnopqrstuvwxyz";
        // int k=n/26,l=n%26;
        string ans="";
        if(n<=28){
            ans+=s[0];
            ans+=s[0];
            n-=2;
            ans+=s[n-1];
        }
        else{
            ans+=s[25];
            n-=26;
            if(n>=27){
                ans+=s[25];
                n-=26;
                if(n>=26){
                    ans+=s[25];
                    n-=26;
                }
                else{
                    ans+=s[n-1];
                }
            }
            else{
                ans+=s[n-2];
                n-=n-1;
                ans+=s[n-1];
            }
            reverse(ans.begin(),ans.end());
            }           
    
        
        cout<<ans<<endl;
        
}
    }