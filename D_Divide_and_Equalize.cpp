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
    vector<int> v(n);
    map<int,int> m;
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n;i++){
        int x=v[i];
        for(int j=2;j*j<=x;j++){
            if(x%j==0){
                while(x%j==0){
                    m[j]++;
                    x/=j;
                }
            }
        }
        if(x>1) m[x]++;
    }
    // for(int i=0;i<n;i++) cout << v[i] <<" ";
    int flag=1;
    for(auto i:m){
        if(i.second%n!=0) {
            flag=0;
            break;
    }
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}   
}