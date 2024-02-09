#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,cnt=0;
    cin>>n;
    int a,b;
    for (int i = 0; i <n; i++)
    {
        cin>>a>>b;
        if(a>b) cnt++;
    }
    cout<<cnt<<endl;
}
    
}