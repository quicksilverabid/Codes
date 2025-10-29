// Author: Abid Hasan
// https://atcoder.jp/contests/abc099/tasks/abc099_c?lang=en
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"
 
 
void solve(){
    int n;
    cin>>n;
    ll ans=n;
    for(int i=0;i<=n;++i){
        ll st=0;
        ll tmp=i;
        while(tmp) st+=tmp%9,tmp/=9;
        tmp=n-i;
        while(tmp) st+=tmp%6,tmp/=6;
        ans=min(ans,st);
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
