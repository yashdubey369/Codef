#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    set<string> st;
    // vector<int> freq(n + 1, 0);
    // for (int k = 0; k < m; k++) {
    //         int i, j;
    //         cin >> i >> j;
    //         i--;
    //         j--;
    //         freq[i]++;
    //         freq[j + 1]--;
    // }
    // for (int i = 1; i < n; i++) {
    //         freq[i] += freq[i - 1];
    // }
    // for (int i = 0; i < n; i++) {
    //         if (freq[i] == 0) continue;
    //         for (int j = i + 1; j < n; j++) {
    //             if (freq[j] == 0) continue;
    //             string t = s;
    //             sort(t.begin() + i, t.begin() + j + 1);
    //             st.insert(t);
    //         }
    //     }
    for (int i = 0; i <m; i++)
    {   string y=s;
        int u,v;
        cin>>u>>v;
        sort(y.begin()+(u-1),y.begin()+(v-1));
        st.insert(y);
     }
     cout<<st.size()<<endl;
    
}
    
}