#include<bits/stdc++.h>
using namespace std;
// void yash(int n,string s,vector<string> &v){
//     if(n==0) {
//         // cout<<s<<endl;
//         v.push_back(s);
//         return;
//     }
//     s[n-1]='1';
//     yash(n-1,s,v);
//     s[n-1]='0';
//     yash(n-1,s,v);
// }
int main(){
    int n;
    cin>>n;
    // string s="";
    vector<string> s;
    s.push_back("");
    // for(int i=0;i<n;i++) s+='0';
    // yash(n,s,v);
    // sort(v.begin(),v.end());
    for(int i=1;i<=n;i++){
        int k=s.size();
        for(int j=k-1;j>=0;j--){
            s.push_back(s[j]);
        }
        k*=2;
        for(int l=0;l<k/2;l++){
            s[l]+='0';
        }
        for(int l=k/2;l<k;l++){
            s[l]+='1';
        }
    }
    for(auto i:s) cout<<i<<endl;
}