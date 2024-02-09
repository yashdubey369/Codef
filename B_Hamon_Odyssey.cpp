#include<bits/stdc++.h>
using namespace std;
bool helper(vector<long long> &v, long long dp, long n)
{
    long long cnt = 0;
    long long sum = 0;
    for(long long i=0; i<v.size(); i++)
    {
        if (sum & v[i] > dp){
            cnt++;
            sum = v[i];
            if (sum > dp) return false;
        }
        else sum &= v[i];
    }
    return (cnt < n);
}

void solve()
{
    long long n, m;
    cin >> n >> m;
    vector<long long> holes(m);
    
    long long l, h;
    l = 1;
    h = 0;
    for(auto &it: holes) 
    {
        cin >> it;
        h += it;
    }
    // INPUT
    
    long long res = 0;
    while(l<=h)
    {
        long long m = l+(h-l)/2;
        if (helper(holes, 0, n))
        {
            res = m;
            h = m-1;
        }
        else 
        l = m+1;
    }
    
    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while(t--)
    solve();
    return 0;
}