// Author: Abid Hasan
// https://atcoder.jp/contests/arc081/tasks/arc081_b
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"

const int mod=1000000007;
 
void solve(){
    int n;
    cin>>n;
    string s,ss;
    cin>>s>>ss;
    ll ans;
    int start;
    bool y=false;
    if(s[0]==ss[0]){
        ans=3;
        start=1;
    }
    else{
        ans=6;
        start=2;
        y=true;
    } 

    while(start<n){
        if(s[start]==ss[start] and !y){
            ans=(ans*2)%mod;
            start++;
            y=false;
        }
        else if(s[start]!=ss[start] and !y){
            ans=(ans*2)%mod;
            start+=2;
            y=true;
        }
        else if(s[start]==ss[start] and y){
            ans=(ans*1)%mod;
            start++;
            y=false;
        }
        else if(s[start]!=ss[start] and y){
            ans=(ans*3)%mod;
            start+=2;
            y=true;
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
