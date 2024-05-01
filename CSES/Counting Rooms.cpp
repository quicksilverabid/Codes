/*
Author: Abid Hasan
Created:  01-May-2024  13:20:03
*/ 
 
#include<bits/stdc++.h>
using namespace std;
#define __         ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#define ll         long long
#define int        ll
#define endl       "\n"
#define f(i,x)     for(int i=0;i<x;++i)
#define pb         push_back
#define pob        pop_back
#define mp         make_pair
#define deb(x)     cout<<#x<<" = "<<x<<endl;
#define all(x)     x.begin(),x.end()
#define sz(x)      (int) x.size()
#define fi         first
#define se         second
 
//void IO(){
//    #ifndef ONLINE_JUDGE
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
//    #endif
//}
const int N=1007;
vector<string>grid(N);
bool vis[N][N];
int n,m;
vector<pair<int,int>>moves={
    {-1,0},{0,1},{0,-1},{1,0}
};
 
bool ischad(int i,int j){
    return (i>=0 and j>=0 and i<n and j<m and !vis[i][j] and grid[i][j]=='.');
};
void dfs(int i,int j){
    vis[i][j]=true;
    for(auto [x,y]:moves){
        if(ischad(i+x,j+y)){
            dfs(i+x,j+y);
        }
    }
}
 
void solve(){
    cin>>n>>m;
    f(i,n) cin>>grid[i];
    int cnt=0;
    f(i,n){
        f(j,m){
            if(grid[i][j]=='.' and !vis[i][j]){
                dfs(i,j);
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}
 
signed main(){
    __
    //IO();
    int tc=1;
    //cin>>tc;
    while(tc--){
     solve();
    }
}
