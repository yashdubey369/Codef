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
    vector<int> v;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    v.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(a[i-1]<=a[i]){
            v.push_back(a[i]) ;
        }
        else{
             v.push_back(a[i]);
             v.push_back(a[i]);

        }

    }
    cout<<v.size()<<endl;
    for(auto i:v) cout<<i<<" ";
    cout<<endl;
}
    
}