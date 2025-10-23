// Author: Abid Hasan
// https://atcoder.jp/contests/abc079/tasks/abc079_d?lang=en
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"
 
 
void solve(){
    int n,m;
    cin>>n>>m;
    int v[n][m];
    int cost[10][10];
    int t=10;

    for(int i=0;i<t;++i){
        for(int j=0;j<t;++j) cin>>cost[i][j];
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j) cin>>v[i][j];
    }
    //Floyd-Warshall algorithm to find the shortest path from each nodes to every other node
    for(int k=0;k<t;++k){
        for(int i=0;i<t;++i){
            for(int j=0;j<t;++j){
                cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
            }
        }
    }


    ll ans=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(v[i][j]!=-1) ans+=cost[v[i][j]][1];
        }
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
