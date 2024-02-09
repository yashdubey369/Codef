#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    vector<int> v;
    vector<int> b=a;
    int m=a.size();
    // while (m>0)
    // {
    // v.push_back(m);
    // for (int i = 0; i < m; i++)
    // {
    //     b[i]--;
    //     if(b[i]==0){
    //         m=i;
    //     }
    // }
        
    // }
    int sum=0;
    for(int i=n-1;i>=0;i--){
        m-=sum;
        if(a[i]==sum)  {
            m--;
            continue;
        }
        int k=a[i]-sum;
        while(k){
            v.push_back(m);
            k--;
        }
        sum+=a[i]-sum;
    }
    for(auto i:v) cout<<i<<" ";
    // // cout<<m<<endl;
    // if(v==a) cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;
    cout<<endl;
    

}
    
}
 