#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int sum=0,maxsum=INT_MIN;
for (int i = 0; i < n; i++)
{
    sum+=a[i];
    maxsum=max(maxsum,sum);
    if(sum<0) sum=0;
}
cout<<maxsum<<endl;
    
}