#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,sum=0;
    cin>>n;
    int a[n];
    for(auto i:a){
    cin>>i;
    sum+=i;
    } 
    if(sum%2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
    
}