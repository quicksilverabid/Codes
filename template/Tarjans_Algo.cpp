// finds all the bridges of a graph in linear time
//bridges are the edges which if we remove, disconnects the whole graph
// Author: Abid Hasan
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"

const int N=1e5+7;
vector<int>tree[N];
int first[N],mini[N],cnt;
bool vis[N];
vector<pair<int,int>>bridge;
int ans=0;
void dfs(int u,int p=-1){
    vis[u]=true;
    first[u]=mini[u]=cnt++;
    for(auto v:tree[u]){
        if(v==p) continue;
        if(vis[v]){
            mini[u]=min(mini[u],first[v]);
        }
        else{
            dfs(v,u);
            mini[u]=min(mini[u],mini[v]);
            if(mini[v]>first[u]){
                bridge.push_back({u,v});
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
    for(auto it:bridge) cout<<it.first<<' '<<it.second<<endl;

}
 
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0) ;
    int tc=1;
    //cin>>tc;
    while(tc--){
     solve();
    }
}

