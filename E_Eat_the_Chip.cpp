#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int a, b, x1, x2, x3, x4;
        cin >> a >> b >> x1 >> x2 >> x3 >> x4;
        int y=abs(x1 - x3);
        if(x1 >= x3){
            cout << "Draw\n";
        }
        else if(y&1){
            if(abs(x2 - x4) <= 1){
                cout << "Alice\n";
            }
            else{
                if(x4 <= x2){
                    if(x4 - 1 >= abs(x1 - x3) / 2){
                        cout << "Draw\n";
                    }else{
                        cout << "Alice\n";
                    }
                }else{
                    if(b - x2 > abs(x1 - x3) / 2){
                        cout << "Draw\n";
                    }else{
                        cout << "Alice\n";
                    }
                }
            }
        }
        else{
            if(x2 - x4 == 0){
                cout << "Bob\n";
            }
            else{
                if(x2<=x4){
                    if(x2 - 1 >= abs(x1 - x3) / 2){
                        cout << "Draw\n";
                    }else{
                        cout << "Bob\n";
                    }
                }else{
                    if(b - x4 > abs(x1 - x3) / 2){
                        cout << "Draw\n";
                    }else{
                        cout << "Bob\n";
                    }
                }
            }
        }
    }
}
    
