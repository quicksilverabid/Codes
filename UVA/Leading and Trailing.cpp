//Bismillahir Rahmanir Raheem
/*
Author: Abid Hasan
Created:  14-October-2024  01:14:48
*/ 
 
#include<bits/stdc++.h>
using namespace std;
#define __         ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#define ll         long long
#define endl       "\n"
ll bigmod(ll n,ll pow,ll mod){
    
    ll ans=1;
    while(pow>0){
        if(pow&1) ans=(ans*n)%mod;
        n=(n*n)%mod;
        pow>>=1;
    }
    return ans%mod;
}

ll leading(ll a, ll b){
    double tmp=b*log10(a);
    tmp=tmp-floor(tmp);
    tmp=pow(10,tmp);
    tmp*=100.00;
    return (int) tmp;

}
 
 
void solve(){
    ll a,b;
    cin>>a>>b;
    int trail=bigmod(a,b,1000);
    int lead=leading(a,b);
    printf("%.3lld...%.3lld\n",lead,trail);
    
}
 
int main(){
    __
    int tc=1;
    cin>>tc;
    while(tc--){
     solve();
    }
}
