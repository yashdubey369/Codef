#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int cnt=0;
    string a[3][1];
    string s,ans="DRAW";
    for (int i = 0; i < 3; i++)
    {
     cin>>a[i][0];  
    }
    string  s1=a[0][0],s2=a[1][0],s3=a[2][0];
    // for (int i = 0; i < 3; i++)
    // {    
    //     s=a[i][0];
    //      for (int i = 1; i < 3; i++)
    //      {
    //        if(s[i]==s[i-1]) cnt++;
    //        if(cnt==2) {
    //         ans=s[i];
    //         break;
    //        }
    //      }
         
    // }
    for (int i = 0; i < 3; i++)
         {
           if(s1[i]==s2[i] && s1[i]==s3[i]) cnt++;
           if(cnt==1) {
            ans=s1[i];
            break;
           }
         }
    if(s1[0]==s1[1] &&s1[0]==s1[2]) ans=s1[0];
    else if(s2[0]==s2[1] &&s2[0]==s2[2]) ans=s2[0];
    else if(s3[0]==s3[1] &&s3[0]==s3[2]) ans=s3[0];
    else if(s1[0]==s2[1] &&s1[0]==s3[2]) ans=s1[0];
    else if(s1[2]==s2[1]&&s1[2]==s3[0]) ans=s1[2];
    if(ans==".") ans="DRAW";
    cout<<ans<<endl;
    
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<a[i][0]<<endl;;
    // }
    
    
}
    
}