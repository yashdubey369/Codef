#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
 int n,sum=0;
 cin>>n;
 int a[n-1];
 for(int i=0;i<n-1;i++){
    cin>>a[i];
    sum+=a[i];
}
sum=-sum;
cout<<sum<<endl;


}   
}