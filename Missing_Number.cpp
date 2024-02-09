#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
// ios::sync_with_stdio(0);
// cin.tie(0);
 
    int n,sum=0,x;
    cin>>n;
    // int a[n-1];
    for(int i=0;i<n-1;i++){
        cin>>x;
        sum+=x;
    }
    int t=(n*(n+1))/2;
    cout<<t-sum<<endl;

 
    
}