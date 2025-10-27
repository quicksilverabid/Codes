// Author: Abid Hasan
// https://atcoder.jp/contests/abc085/tasks/abc085_d?lang=en
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"
 
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<pair<ll,ll>>v;

    for(int i=0;i<n;++i){
        int a,b;
        cin>>a>>b;
        if(a>b) b=a;
        v.push_back({b,a});
    }

    sort(v.rbegin(),v.rend());

    ll mini=INT_MAX;
    ll throwsum=0;
    ll cnt=0;
    ll maxi=0;
    for(int i=0;i<n;++i){
        
        throwsum+=v[i].first;
        maxi=max(maxi,v[i].second);
        ll tmp=k-throwsum;
        cnt=i+1;
        ll add=0;
        if(tmp>0){
            add=(tmp+maxi-1)/maxi;
        }
        mini=min(mini,cnt+add);
    }

    cout<<mini<<endl;

}
 
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0) ;
    int tc=1;
    //cin>>tc;
    while(tc--){
     solve();
    }
}
