// Author: Abid Hasan
// https://atcoder.jp/contests/abc080/tasks/abc080_c
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"
 
 
void solve(){
    int n;
    cin>>n;
    ll v[n][10];
    for(int i=0;i<n;++i){
        for(int j=0;j<10;++j) cin>>v[i][j];
    }

    ll p[n][11];
    for(int i=0;i<n;++i){
        for(int j=0;j<11;++j) cin>>p[i][j];
    }
    ll maxi=INT_MIN;
    for(int mask=1;mask<(1<<10);++mask){
        bitset<10>num(mask);
        ll sum=0;
        for(int i=0;i<n;++i){
            int cnt=0;
            for(int j=0;j<10;++j){
                if(num[j]==v[i][j] and num[j]==1){
                    cnt++;
                }
            }
            sum+=p[i][cnt];
        }
        maxi=max(maxi,sum);
    }
    cout<<maxi<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0) ;
    int tc=1;
    //cin>>tc;
    while(tc--){
     solve();
    }
}
