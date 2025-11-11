// Author: Abid Hasan
// https://atcoder.jp/contests/abc112/tasks/abc112_d
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"
 
 
void solve(){
    ll n,k;
    cin>>n>>k;
    ll ck=k/n;
    ll ans=0;
    for(ll i=1;i*i<=k;++i){
        if(k%i==0){
            if(i<=ck) ans=max(ans,i);
            if(k/i<=ck) ans=max(ans,k/i);
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
