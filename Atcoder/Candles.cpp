// Author: Abid Hasan
// https://atcoder.jp/contests/abc107/tasks/arc101_a
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"
 
 
void solve(){
    int n,k;
    cin>>n>>k;
    int v[n];
    for(int i=0;i<n;++i) cin>>v[i];

    ll ans=INT_MAX;

    for(int i=0;i<n-k+1;++i){
        ll l=v[i];
        ll r=v[i+k-1];
        ll tl=abs(l)+abs(r-l);
        ll tr=abs(r)+abs(r-l);
        ans=min({ans,tl,tr});
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
