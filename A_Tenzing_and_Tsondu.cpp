#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
 int n,m,sumn=0,summ=0;
 cin>>n>>m;
 for(int i=0;i<n;i++){
    int y;
    cin>>y;
    sumn+=y;
 }   
 for (int i = 0; i < m; i++)
 {
    int y;
    cin>>y;
    summ+=y;
    /* code */
 }
 if(sumn>summ) cout<<"Tsondu"<<endl;
 else if(summ>sumn) cout<<"Tenzing"<<endl;
 else cout<<"Draw"<<endl;
}
    
}