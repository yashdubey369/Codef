#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,cnt=0,mx=INT_MIN;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%(i)==0) cnt++;
        else {
            break;
        }
    }
    cout<<cnt<<endl;
}
    
}