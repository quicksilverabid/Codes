// Author: Abid Hasan
// https://atcoder.jp/contests/abc075/tasks/abc075_c?lang=en
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"

const int N=55;

vector<int>tree[N];

int fir[N],mini[N],cnt;
bool vis[N];
int ans=0;  
  
void dfs(int u,int p=-1){
    vis[u]=true;
    fir[u]=mini[u]=cnt++; 
    for(auto v:tree[u]){
        if(v==p) continue;
        if(vis[v]){
            mini[u]=min(mini[u],fir[v]);
        }
        else{
            dfs(v,u);
            mini[u]=min(mini[v],mini[u]);
            if(mini[v]>fir[u]){
                ans++;
            }
        }
    }
}

void solve(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;++i){
        int u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    cnt=0;

    for(int i=1;i<=n;++i){
        if(!vis[i]) dfs(i);
    }
    cout<<ans<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0) ;
    int tc=1;
    //cin>>tc;
    while(tc--){
     solve();
    }
}
