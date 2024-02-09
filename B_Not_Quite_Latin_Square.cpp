#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    vector<string> v;
 for(int i=0;i<3;i++){
    string s;
    cin>>s;
    v.push_back(s);
 }   
 map<char,int> m;
 m['A']=0;
 m['B']=0;
 m['C']=0;
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(v[i][j]=='?'){
            for(int k=0;k<3;k++){
                if(k!=j && m.find(v[i][k])!=m.end()) m[v[i][k]]=1;
            }
        }
    }
 }
 for(auto i:m){
    if(i.second==0) {
        cout<<i.first<<endl;
        break;
    }
 }
}
    
}