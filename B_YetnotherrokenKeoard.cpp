#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fa(i,a,n) for (int i = a; i < n; i++)
#define fr(i,n) for(int i=n-1;i>=0;i--)
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
        string s;
        cin>>s;
        // cout<<s<<endl;

        // stack<char> su,sl;
        int n=s.size(),u=0,l=0;
        fr(i,n){
            if(s[i]=='b') l++;
            else if(s[i]=='B') u++;
            else{
                if(isupper(s[i]) && u>0){
                    s[i]='#';
                    u--;
                }
                else if(islower(s[i])&& l>0){
                    s[i]='#';
                    l--;
                }
            }
        }
        string ans="";
        f(i,n){
            if(s[i]!='#' && s[i]!='b'&& s[i]!='B')
            ans+=s[i];
        }
        cout<<ans<<endl;
            


   }
}