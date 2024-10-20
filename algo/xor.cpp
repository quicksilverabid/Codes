//Bismillahir Rahmanir Raheem
/*
Author: Abid Hasan
Created:  20-October-2024  21:53:16
*/ 
 
#include<bits/stdc++.h>
using namespace std;
#define __         ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#define ll         long long
#define endl       "\n"

//given a single duplicate number in an array of length n+1, find that number;
//so, n=5 -> array={3,2,5,5,1,4}...which one is duplicate
 
 
void solve(){
    int n;
    cin>>n;
    int ck=0;
    for(int i=1;i<=n;++i) ck^=i;
    n++;
    int v[n];
    for(int i=0;i<n;++i) cin>>v[i];

    for(int i=0;i<n;++i){
        ck^=v[i];
    }
    cout<<ck<<endl;
}
 
int main(){
    __
    int tc=1;
    //cin>>tc;
    while(tc--){
     solve();
    }
}
