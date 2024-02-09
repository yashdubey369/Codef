#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<vector<char>> v(n,vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int mx=INT_MAX,ans=0;
    for(int i=0;i<n/2;i++){
        for(int j=i;j<=n-i-2;j++){
            mx=max(max(v[i][j]-'a',v[j][n-1-i]-'a'),max(v[n-1-i][n-1-j]-'a',v[n-1-j][i]-'a'));
            ans+=4*mx-(v[i][j]-'a'+v[j][n-i-1]-'a'+v[n-1-i][n-1-j]-'a'+v[n-1-j][i]-'a');
        }
    }
    cout<<ans<<endl;

}
    
}