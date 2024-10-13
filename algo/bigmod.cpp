/*
Author: Abid Hasan
Created:  13-January-2024  23:57:05
*/ 
 
#include<bits/stdc++.h>
using namespace std;
#define __         ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#define ll long long
#define endl "\n"

const int mod=1e9+7;
 
ll bigmod(ll n,ll p){
    ll ans=1;
    while(p>0){
        if(p&1) ans=(ans*n)%mod;
        p>>=1;
        n=(n*n)%mod;
    }
    return ans%mod;
}


ll inversemod(ll n,ll p){
    return bigmod(n,mod-2);
}
 
int main(){
    __
    int n,p;
    cin>>n>>p;
    cout<<bigmod(n,p)<<endl;
}
