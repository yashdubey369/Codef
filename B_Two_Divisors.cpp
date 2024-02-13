#include <bits/stdc++.h>
// #include <boost/math/common_factor.hpp>

using namespace std;

#define int long long int

signed main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t;
   cin >> t;
   while (t--)
   {
      int n = words.size();
      map<char, int> m;
      vector<int> v;
      for (int i = 0; i < n; i++)
      {
         v.push_back(words[i].size() / 2);
         for (auto c : words[i])
            m[c]++;
      }
      sort(v.begin(), v.end());
      int k = 0, j = 0;

      for (const auto i : m)
         k += i.second / 2;

      int i=0;
      while(i<v.size()){
         if ((k -= v[i]) >= 0)
            j++;
         else
            return j;

      }

      return v.size();
   }
}