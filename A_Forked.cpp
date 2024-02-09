#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
 int a,b,xk,yk,xq,yq;
 cin>>a>>b;
 cin>>xk>>yk;
 cin>>xq>>yq;
 set<pair<int,int>> vk,vq;
 int y=xk,d=yk;
 y+=b;
 d+=a;
 vk.insert({y,d});
 d=yk;
 d-=a;
 vk.insert({y,d});

 y=xk;
 d=yk;
 y-=b;
 d+=a;
 vk.insert({y,d});
 d=yk;
 d-=a;
 vk.insert({y,d});

 y=xk;
 d=yk;
 d+=b;
 y+=a;
 vk.insert({y,d});
 y=xk;
 y-=a;
 vk.insert({y,d});

 y=xk;
 d=yk;
 d-=b;
 y+=a;
 vk.insert({y,d});
 y=xk;
 y-=a;
 vk.insert({y,d});

 y=xq;
 d=yq;
 y+=b;
 d+=a;
 vq.insert({y,d});
 d=yq;
 d-=a;
 vq.insert({y,d});

 y=xq;
 d=yq;
 y-=b;
 d+=a;
 vq.insert({y,d});
 d=yq;
 d-=a;
 vq.insert({y,d});

 y=xq;
 d=yq;
 d+=b;
 y+=a;
 vq.insert({y,d});
 y=xq;
 y-=a;
 vq.insert({y,d});

 y=xq;
 d=yq;
 d-=b;
 y+=a;
 vq.insert({y,d});
 y=xq;
 y-=a;
 vq.insert({y,d});

int ans=0;
// cout<<"k"<<endl;
for(auto i:vk){
    for(auto j:vq){
        if(i==j) ans++;
    }

    // cout<<i.first<<" "<<i.second<<endl;
}
// cout<<"q"<<endl;
// for(auto i:vq){
//         // if(i==j) ans++;
//     cout<<i.first<<" "<<i.second<<endl;

//     }
cout<<ans<<endl;




 

}
    
}