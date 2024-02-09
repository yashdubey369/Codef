#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n, k;
cin>>n>>k;
int a[n];
map<int,int> m;
for (int i = 0; i < n; i++)
{
    cin>> a[i];
    m[a[i]]=i;
}
for(int i=0;i<n;i++){
    if(m.find(k-a[i])!=m.end()){
        if(i!=m[k-a[i]])
        cout<<i+1<<" "<<m[k-a[i]]+1<<endl;
        else continue;
        return 0;
    }
}
cout<<"IMPOSSIBLE"<<endl;


}