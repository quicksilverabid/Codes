// Author: Abid Hasan
// https://atcoder.jp/contests/abc102/tasks/arc100_a
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"
 
 
void solve(){
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;++i){
        cin>>v[i];
        v[i]-=(i+1);
    }

    ll ans=0;
    sort(v,v+n);

    ll mid=0;
    if(n&1){
        mid=v[n/2];
    }
    else{
        mid=(v[n/2]+v[n/2-1])/2;
    }
    

    for(int i=0;i<n;++i){
        ans+=abs(v[i]-mid);
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
