 #include<bits/stdc++.h>
 using namespace std;
 
 #define int long long int
 void yash(int n,int k){
    vector<int> v(n);
    vector<pair<int,int>> y;
    for(int i=0;i<n;i++){
      cin>>v[i];
      int d = v[i]%k;
      if(d) v[i]=d;
      else v[i] = k;
      y.push_back({v[i],-i});
    }
    sort(y.begin(),y.end());
    reverse(y.begin(),y.end());
    int i=0;
    while(i<y.size()){
      int j = y[i].second;
      j=-j;
      j+=1;
      cout<<j<<" ";
      i++;
    }
    cout<<endl;
 }
 signed main(){
 ios::sync_with_stdio(0);
 cin.tie(0);
 int t;
 cin>>t;
 while(t--){
    int n, k;
    cin>> n>> k;
    yash(n,k);
 }
    
 }
 
  