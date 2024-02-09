// C++ program to print all permutations 
// with duplicates allowed 
#include <bits/stdc++.h> 
using namespace std; 


void permute(string a, int l, int r,set<string> &st) 
{ 
	// Base case 
	if (l == r) 
		st.insert(a); 
	else
	{ 
		// Permutations made 
		for (int i = l; i <= r; i++) 
		{ 
			// Swapping done 
			swap(a[l], a[i]); 

			// Recursion called 
			permute(a, l+1, r,st); 

			//backtrack 
			swap(a[l], a[i]); 
		} 
	} 
} 

// Driver Code 
int main() 
{ 
    string s;
    cin>>s; 
	int n = s.size(); 
    set<string> st;
	permute(s, 0, n-1,st);
    cout<<st.size()<<endl;
    for(auto i:st) cout<<i<<endl;

	return 0; 
} 
 