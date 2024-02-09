#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,five = 5,ans=0 ;
    cin >> n;
    // n++;
    while (five<=n)
    {
        ans+=n/five;
        five*=5;
    }
    // cout<<ten<<" "<<(two)<<" "<<(five)<<endl;
    cout<<ans<<endl;
}