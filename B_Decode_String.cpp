#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    string a="abcdefghijklmnopqrstuvwxyz";
    int n;
    cin>>n;
    string s;
    cin>>s;
    string y="";
    for(int i=n-1;i>=0;i--){
        if(s[i]=='0') {
            i-=2;
            string m=s.substr(i,2);
            // cout<<m<<" ";
            int k=(stoi(m))-1;
            y+=a[k];
            // cout<<"yes"<<endl;
        }
        else {
            int k=(s[i]-'0')-1;
            y+=a[k];
        }
        // if(s[i]=='0') break;
        // cout<<s[i]<<" ";
    }
    reverse(y.begin(),y.end());
    cout<<y<<endl;
}
    
}