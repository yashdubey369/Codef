#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
string s;
cin>>s;
int n=s.size(),flag=1,a=1,cnt=0;
if(n%2==0) flag=0;
map<char,int> m;
for(auto i:s){
    m[i]++;
}
if(flag){
for(auto i:m){
    if(i.second%2) cnt++;
    if(cnt>1){
        a=0;
        // flag=1;
        break;
    }
}
}
else{
    for(auto i:m){
    if(i.second%2){
          a=0;
        break;
    }
}

}
string sf,sr;
if(a){
    if(flag){
        char ch;
        for(auto i:m){
            if(i.second%2) ch=i.first;
            int k=i.second/2;
            while(k--){
            sf.push_back(i.first);

            }
        }
        sr=sf;
        reverse(sr.begin(),sr.end());
        cout<<sf<<ch<<sr;
    }
    else{
         for(auto i:m){
            int k=i.second/2;
            while(k--){
            sf.push_back(i.first);

            }
        }
        sr=sf;
        reverse(sr.begin(),sr.end());
        cout<<sf<<sr;
        
    }
}
else cout<<"NO SOLUTION
"<<endl;
}