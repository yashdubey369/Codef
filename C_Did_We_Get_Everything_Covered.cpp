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
        int n,k,m;
        cin>>n>>k>>m;
        string s,ans="";
        cin>>s;
        set<char> st;
        for(auto i:s){
            st.insert(i);
            if(st.size()==k){
                st.clear();
                ans.push_back(i);
            }
        }
        // cout<<cnt<<endl;
        if(ans.size()>=n) cout<<"YES"<<endl;
        else{
            char i;
            cout<<"NO"<<endl;
            for(auto ch='a';ch<'a'+k;ch++){
                if(st.find(ch)==st.end()){
                    i=ch;
                    break;
                }
            }
            while(ans.size()<n)ans.push_back(i);
            cout<<ans<<endl;
        }
    }
}