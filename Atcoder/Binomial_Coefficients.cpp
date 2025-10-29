// Author: Abid Hasan
// https://atcoder.jp/contests/arc095/tasks/arc095_b?lang=en
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
    }

    sort(v,v+n,greater<int>());

    int mid=v[0]/2;

    int mini=INT_MAX,num=0;
    for(int i=1;i<n;++i){
        if(abs(mid-v[i])<mini){
            mini=abs(mid-v[i]);
            num=v[i];
        }
    }

    cout<<v[0]<<' '<<num<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0) ;
    int tc=1;
    //cin>>tc;
    while(tc--){
     solve();
    }
}
