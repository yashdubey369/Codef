#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
 int n;
 cin>>n; 
 while(n--){
 string s;
 cin>>s;
 int a=s[1]-'0';
 char c=s[0];
 string v="abcdefgh";
 for(int i=1;i<=8;i++){
    if(i==a) continue;
    cout<<c<<i<<" ";
 } 
 for (char ch='a';ch<='h';ch++)
 {  if(ch==c) continue;
    cout<<ch<<a<<" ";
 }
 cout<<endl;
 }

    
}