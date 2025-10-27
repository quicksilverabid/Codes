// Author: Abid Hasan
// https://atcoder.jp/contests/abc088/tasks/abc088_d?lang=en
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"
const int N=55;

char v[N][N];
queue<pair<int,int>>q;
bool vis[N][N];
int dist[N][N];
int n,m;

int bfs(int si,int sj,int ei,int ej){
    vis[si][sj]=true;
    int dx[]={-1,1,0,0};
    int dy[]={0,0,-1,1};
    q.push({si,sj});
    dist[si][sj]=0;
    while(!q.empty()){
        auto [a,b]=q.front();
        q.pop();
        for(int i=0;i<4;++i){
            int na=a+dx[i];
            int nb=b+dy[i];
            if(na>=0 and na<n and nb>=0 and nb<m and !vis[na][nb] and v[na][nb]!='#'){
                vis[na][nb]=true;
                dist[na][nb]=dist[a][b]+1;
                q.push({na,nb});
            }
        }

    }
    return dist[ei][ej];
}
 
void solve(){
    cin>>n>>m;
    int cnt=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>v[i][j];
            if(v[i][j]=='.') cnt++;
        }
    }

    int mini=bfs(0,0,n-1,m-1);
    if(mini==0){
        cout<<-1<<endl;
    }
    else cout<<cnt-mini-1<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0) ;
    int tc=1;
    //cin>>tc;
    while(tc--){
     solve();
    }
}
