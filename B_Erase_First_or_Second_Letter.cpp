#include <bits/stdc++.h>
using namespace std;

#define int long long int
// void yash(string &s, unordered_set<string> &st)
// {
//     if (s.size() == 1)
//     {
//         return;
//     }
//     string t= s;
//     s.erase(s.begin() + 0);
//     t.erase(t.begin() + 1);
//     if (st.find(s) == st.end())
//     {
//         st.insert(s);
//         yash(s, st);
//     }
//     if (st.find(t ) == st.end())
//     {
//         st.insert(t);
//         //  yash(s,st);
//         yash(t, st);
//     }

//     return;
// }
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n,ans=0;
        cin >> n;
        string s;
        cin >> s;
        unordered_set<char> st;
        for(int i=0;i<n;i++){
            st.insert(s[i]);
            ans+=st.size();
        }
        // st.insert(s);
        // yash(s, st);
        cout <<ans<< endl;
    }
}