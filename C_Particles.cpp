#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,mx=INT_MIN;
    cin>>n;
    int a[n];
    for(auto &i:a) {
        cin>>i;
        if(i>mx) mx=i;
    }
    if(mx<=0){
        cout<<mx<<endl;
        continue;
    }
    int s1=0,s2=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(a[i]>=0) s1+=a[i];
        }
        else{
            if(a[i]>=0) s2+=a[i];
        }
    }
    cout<<max(mx,max(s1,s2))<<endl;

}
    
}