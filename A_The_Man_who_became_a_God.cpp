 #include<bits/stdc++.h>
 using namespace std;
 
 #define int long long int
 
 signed main(){
 ios::sync_with_stdio(0);
 cin.tie(0);
 int t;
 cin>>t;
 while(t--){
    int n,m,ans=0;
    cin>>n>>m;
    int a[n];
    vector<int> v;
    for(auto& i:a) cin>>i;
    for (int i = 1; i < n; i++)
    {
        v.push_back(abs(a[i-1]-a[i]));
    }
    sort(v.begin(),v.end());
    for(int i=n-m-1;i>=0;i--){
        ans+=v[i];
    }
    cout<<ans<<endl;
    

 }
    
 }