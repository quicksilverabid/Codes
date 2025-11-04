// Author: Abid Hasan
// https://atcoder.jp/contests/abc108/tasks/arc102_a?lang=en
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"
 
 
void solve(){
    int n,k;
    cin>>n>>k;
    ll ans=0;
    ll cnt=0;
    for(int i=1;i<=n;++i){
        if(i%k==0) cnt++;
    }
    ans=cnt*cnt*cnt;
    cnt=0;
    if(k%2==0){
        for(int i=1;i<=n;++i){
            if(i%k==k/2) cnt++;
        }
    }
    ans+=cnt*cnt*cnt;
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
