#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
int i=1;
while (i<=n)
{
    cout<<((i*i*(i*i-1))-(8*(i-2)*(i-1)))/2<<endl;
    i++;
}

    
}