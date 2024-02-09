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
 int arr[n];
 for(int i=0;i<n ;i++){
    cin>>arr[i];

 }
 int ans=1;  
 sort(arr,arr+n);
 arr[0]+=1;
 for(int i=0;i<n;i++){
    ans*=arr[i];
 } 
 cout<<ans<<endl;
}
    
}