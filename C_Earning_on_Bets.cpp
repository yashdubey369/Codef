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

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(vi a,int n){
    int ans = a[0];
    for (int i = 1; i < n; i++)
        ans = (((a[i] * ans)) /
                (gcd(a[i], ans)));
 
    return ans;
}
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
        vi a(n);
        inp(a);
        int l=lcm(a,n),sum=0;
        for(int i=0;i<n;i++){
            sum+=l/a[i];
        }
        if(sum>=l) {
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<n;i++) cout<<l/a[i]<<" ";
        cout<<endl;
        
    }
}