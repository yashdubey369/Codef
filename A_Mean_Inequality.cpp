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
    int a[2*n];
    for(auto &i:a){
        cin>>i;
    }
    sort(a,a+2*n);  
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" "<<a[2*n-1-i]<<" ";
    }
    cout<<endl;
    
}
    
}