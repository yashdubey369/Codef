#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
if(n==1) cout<<1<<endl;
else if(n==2|| n==3) cout<<"NO SOLUTION"<<endl;
else{
    int i=2;
    while(i<=n){
        cout<<i<<" ";
        i+=2;
    }
    i=1;
    while(i<=n){
        cout<<i<<" ";
        i+=2;
    }

}
    
}