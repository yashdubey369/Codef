#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,x,y;
    cin>>n>>x>>y;
    int sumx=0,sumy=0;
    // for(int i=1;i<=n;i++){
    //     if(i%x==0) sumx+=i;
    //     if(i%y==0) sumy+=i;
    // }
    for (int i = x; i <n; i*x)
    {
        sumx+=i
    }
    
    cout<<sumx-sumy<<endl;
}
    
}