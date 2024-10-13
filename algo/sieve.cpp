/*
Author: Abid Hasan
Created:  16-September-2023  02:12:22
*/ 
 
#include<bits/stdc++.h>
using namespace std;
#define __         ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#define ll         long long
#define endl       "\n"

const int N=1e7+7;
vector<bool> v(N,true);
void sieve(){
    v[0]=v[1]=false;
    for(int i=4;i<=N;i+=2){
        v[i]=false;
    }
    for(int i=3;i*i<=N;i+=2){
        if(v[i]){
            for(int j=i*i;j<=N;j+=2*i){
                v[j]=false;
            }
        }
    }
    for(int i=2;i<=N;i++){
        if(v[i]) cout<<i<<" ";
    }

}
void solve(){
    sieve();
}
 
 
int main(){
    __
    int tc=1;
    // cin>>tc;
    while(tc--){
        solve();
    }
    
}
