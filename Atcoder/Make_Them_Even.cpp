// Author: Abid Hasan
// https://atcoder.jp/contests/abc109/tasks/abc109_d
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"

void solve(){
    int n,m;
    cin>>n>>m;
    int v[n][m];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j) cin>>v[i][j];
    }

    vector<pair<pair<int,int>,pair<int,int>>>vp;
    vector<pair<int,int>>path;
    for(int i=0;i<n;++i){
        if(i%2==0){
            for(int j=0;j<m;++j) path.push_back({i,j});
        }
        else{
            for(int j=m-1;j>=0;--j) path.push_back({i,j});
        }
    }

    for(int i=0;i+1<(int)path.size();++i){
        int y1=path[i].first, x1=path[i].second;
        int y2=path[i+1].first, x2=path[i+1].second;
        if(v[y1][x1]&1){
            v[y1][x1]--;
            v[y2][x2]++;
            vp.push_back({{y1+1,x1+1},{y2+1,x2+1}});
        }
    }

    cout<<vp.size()<<endl;
    for(auto it:vp) cout<<it.first.first<<' '<<it.first.second<<' '<<it.second.first<<" "<<it.second.second<<endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int tc=1;
    //cin>>tc;
    while(tc--){
        solve();
    }
}
