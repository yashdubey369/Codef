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
    string s1,s2;
        cin>>s1>>s2;
    int cnt1=0,cnt2=0,cntd=0;
    for(int i=0;i<n;i++){
        if(s1[i]=='1') cnt1++;
        if(s2[i]=='1') cnt2++;
        if(s1[i]!=s2[i]) cntd++;
    }
    int cnt=abs(cnt1-cnt2);
    cntd-=cnt;
    cout<<cnt+cntd/2<<endl;
}
    
}