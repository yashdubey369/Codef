#include <bits/stdc++.h>
using namespace std;

#define int long long int
// bool check(int n)
// {
//     while (n > 0)
//     {
//         if (n % 2 != 0)
//             return false;
//         n /= 2;
//     }
//     return true;
// }
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        //   cout<<check(n)<<endl;
        if (n >=5)
            cout << "Alice" << endl;
        else
        {
            cout << "Bob" << endl;
        }
    }
}