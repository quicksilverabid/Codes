/*
Author: Abid Hasan
Created:  24-March-2024  21:12:54
*/ 
 
#include<bits/stdc++.h>
using namespace std;
#define __         ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#define ll         long long
#define endl       "\n"


//kadane's algorithm
//finds the maximum sum of a subarray in O(n)


void solve(){
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;++i) cin>>v[i];
    ll maxsofar=INT_MIN;
    ll maxi=INT_MIN;
    for(int i=0;i<n;++i){
        maxsofar=max(1LL*v[i],v[i]+maxsofar);
        maxi=max(maxi,maxsofar);
    }
    cout<<maxi<<endl;
}
 
int main(){
    __
    int tc=1;
    //cin>>tc;
    while(tc--){
     solve();
    }
}
