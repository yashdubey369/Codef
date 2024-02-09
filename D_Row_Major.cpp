#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    string s="zyxwvutsrqponmlkjihgfedcba";
    int n;
    cin>>n;
    if(n==1) cout<<"a"<<endl;
    if(n==2) cout<<"ab"<<endl;
    if(n>=3){
    int y=1;
    while (y>0)
    {
         if(n%y!=0) break;
         y++;
    }
    int d=y;
    for(int i=0;i<n;i++){
        cout<<s[d-1];
        d--;
        if(d==0) d=y;
    }
    cout<<endl;
    }
    
}
    
}