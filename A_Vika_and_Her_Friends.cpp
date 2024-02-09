#include<bits/stdc++.h>
using namespace std;

#define int long long int
void yash(){
    int n,m,k,flag=1;
    cin>>n>>m>>k;
    int x,y;
    cin>>x>>y;
        while(k--) {
            int m, j;
            cin >> m>> j;
            if (( abs(x - m)+abs(y - j)) % 2 == 0) {  
                flag= 0;
            }
        }
        if (flag) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    
}
signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    yash();
}
} 