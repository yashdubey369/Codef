#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int n=s.size();
    int flag=1,cnt=0;
     if(n==2) {
        if(s[0]=='('&& s[1]==')') {
            cout<<"NO"<<endl;
            continue;
        }
     }
        for(int i=0;i<n-1;i++){
            if(s[i]=='(' && s[i+1]=='(' || s[i]==')' && s[i+1]==')') cnt++;
            if(cnt>0) break;
        }
        if(cnt) {
            cout<<"YES"<<endl;
            for (int i = 0; i < n; i++)
            {
                cout<<"("<<")";
            }
            cout<<endl;
        }
        
    
    else{
        cout<<"YES"<<endl;
            for (int i = 0; i < n; i++)
            {
               cout<<"(";
            }
            for(int i=0;i<n;i++){
                cout<<")";
            }
            cout<<endl;

    }
}
    
}