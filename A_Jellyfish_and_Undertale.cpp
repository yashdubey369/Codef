#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int a,b,n,sum=0;
    cin>>a>>b>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x<a) sum+=x;
        else sum+=a-1;
        // sum+=min(;
    }
    sum+=b;
    cout<<sum<<endl;
}
    
}