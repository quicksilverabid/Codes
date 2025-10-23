// Author: Abid Hasan
// https://atcoder.jp/contests/arc084/tasks/arc084_a
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"
 
 
void solve(){
    int n;
    cin>>n;
    vector<int>a(n),b(n),c(n);
    for(int i=0;i<n;++i) cin>>a[i];
    for(int i=0;i<n;++i) cin>>b[i];
    for(int i=0;i<n;++i) cin>>c[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    ll ans=0;
    for(int i=0;i<n;++i){
        ll ind=lower_bound(a.begin(),a.end(),b[i])-a.begin();
        ll indd=c.end()-upper_bound(c.begin(),c.end(),b[i]);
        ans+=ind*indd;
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
