#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    if((a+b)%3!=0) cout<<"NO"<<endl;
    else{
        if(a<b && 2*a<b){
            cout<<"NO"<<endl;
        }
        else if(b<a && 2*b<a) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }


}
    
}