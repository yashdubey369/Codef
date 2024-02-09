#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
 string s,a="",b="";
 cin>>s;
 int n=s.size();
 if(s[1]!='0'){
    a+=s[0];
    b+=s.substr(1,n);
 }   
 else{
    for(int i=2;i<n;i){
        if(s[i]=='0'){
            i++;
        }
        else{
            a+=s.substr(0,i);
            b+=s.substr(i,n-i);
            break;
        }
    }
 }
 if(stoi(a)<stoi(b)) {
 cout<<a<<" "<<b<<" "<<endl;
 }
 else
    cout<<-1<<endl;
}
    
}