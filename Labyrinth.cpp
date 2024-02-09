#include<bits/stdc++.h>
using namespace std;

#define int long long int
char adjm[1001][1001];
int vis[1001][1001];
int prev[1001][1001];
string ans,s;
int mx=INT_MAX;
int delrow[]={0,0,-1,1};
int delcol[]={1,-1,0,0};
bool dfs(int n,int m,int r,int c){
    vis[r][c]=1;
    for(int i=0;i<4;i++){
        int nr=r+delrow[i];
        int nc=c+delcol[i];
        if(nr>=0&&nr<n&&nc>=0&&nc<m && adjm[nr][nc]=='.' &&!vis[nr][nc]) {
            if(dfs(n,m,nr,nc)) {
                if(delrow[i]==0&&delcol[i]==-1) ans.push_back('L');
                else if(delrow[i]==0&&delcol[i]==1) ans.push_back('R');
                else if(delrow[i]==-1&&delcol[i]==0) ans.push_back('U');
                else if(delrow[i]==1&&delcol[i]==0) ans.push_back('D');
                return true;
            }
        }
        if(adjm[nr][nc]=='B'){
              if(delrow[i]==0&&delcol[i]==-1) ans.push_back('L');
                else if(delrow[i]==0&&delcol[i]==1) ans.push_back('R');
                else if(delrow[i]==-1&&delcol[i]==0) ans.push_back('U');
                else if(delrow[i]==1&&delcol[i]==0) ans.push_back('D');
                if(ans.size()<mx){
                    s=ans;
                    mx=ans.size();
                }
                ans="";
            return true;
        }
    }
    return false;


}

bool bfs(int n,int m,int i,int j){
    queue<pair<int,int>> q;
    vis[i][j]=1;
    q.push({i,j});
    while(!q.empty()){
        int r=q.front().first;
        int c=q.front().second;
        q.pop();
        if(adjm[r][c]=='B'){
            return true;
        }
        for(int k=0;k<4;k++){
            int nr=r+delrow[k];
            int nc=c+delcol[k];
            if(nr>=0&&nr<n&&nc>=0&&nc<m && adjm[nr][nc]=='.' &&!vis[nr][nc]){
                vis[nr][nc]=1;
                prev[nr][nc]=k;
                q.push({nr,nc});
            }

        }

    }
}
signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n,m;
cin>>n>>m;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>adjm[i][j];
        vis[i][j]=0;
    }
}
int flag=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(adjm[i][j]=='A' && !vis[i][j]) 
        if(bfs(n,m,i,j)) flag=1;
    }
}
if(flag) {
    cout<<"YES"<<endl;
    // cout<<s.size()<<endl;
    // reverse(s.begin(),s.end());
    // cout<<s<<endl;
}
else cout<<"NO"<<endl;
    
}