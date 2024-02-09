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
    int i=1;
    while (n--)
    {
        cout<<i<<" ";
        i+=2;
    }
    cout<<endl;
}
    
}