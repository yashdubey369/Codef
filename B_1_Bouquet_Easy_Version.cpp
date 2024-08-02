// // #include <bits/stdc++.h>
// // using namespace std;

// // #define int long long int
// // #define fa(i,a,n) for (int i = a; i < n; i++)
// // #define f(i, n) fa(i,0,n)
// // #define frev(i,n) for(int i=n-1;i>=0;i--)
// // #define fitr(i,m) for(auto i:m)
// // #define inp(x) for(int i=0;i<n;i++) cin>>x[i];
// // #define pb push_back
// // #define mp make_pair
// // #define fi first
// // #define se second
// // #define all(x) x.begin(), x.end()
// // #define clr(x) memset(x, 0, sizeof(x))

// // typedef pair<int, int> pi;
// // typedef vector<int> vi;
// // typedef vector<pi> vpi;
// // typedef vector<vi> vvi;

// // signed main()
// // {
// //     ios::sync_with_stdio(0);
// //     cin.tie(0);
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         int n,m;
// //         cin>>n>>m;
// //         vi a(n);
// //         inp(a);
// //         sort(a.begin(),a.end());
// //         int i=0,j=0,sum=0,ans=INT_MIN;
// //         while(j<n){
// //             sum+=a[j];
// //             while(sum>m || (a[j]-a[i])>1){
// //                 sum-=a[i];
// //                 i++;
// //             }
// //             ans=max(ans,sum);
// //             j++;
// //         }
// //         cout<<ans<<endl;
// //     }
// // }
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long int
// signed main()
// {
//     cin.tie(nullptr);
//     ios::sync_with_stdio(false);
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int m;
//         cin >> m;
//         vector <int> arr(n);
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
       
//         sort(arr.begin(), arr.end());
//         int sum = 0;
//         int ans = INT_MIN;
//         int i = 0;
//         int j = 0;
//         while (j < arr.size()) {
//             sum += arr[j];
//             while (sum > m || (arr[j] - arr[i]) > 1) {
//                 sum -= arr[i];
//                 i++;
//             }
//             ans = max(ans, sum);
//             j++;
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int m=1e9+7;
 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll i=0,ans=0,sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=v[j];
            while(sum>m || ((i<j) && (v[j]-v[i])>1))
            {
                sum-=v[i++];
            }
            ans=max(ans,sum);
        }
        cout<<ans<<endl;
    }
     
    return 0;
}