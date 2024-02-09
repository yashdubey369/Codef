#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
cout<<n<<" ";
while(n!=1){
    if(n&1){
        n=n*3+1;
    }
    else n/=2;
    cout<<n<<" ";
} 
cout<<endl;
}