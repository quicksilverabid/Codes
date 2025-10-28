// Author: Abid Hasan
// https://atcoder.jp/contests/arc091/tasks/arc091_b
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"
 
 
void solve(){
    ll n,k;
    cin>>n>>k;
    if(k==0){
        cout<<1LL*n*n<<endl;
        return;
    }
    ll ans=0;
    for(int i=k+1;i<=n;++i){
        ans+=(n/i)*(i-k)+max<ll>(0,n%i-k+1);
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
