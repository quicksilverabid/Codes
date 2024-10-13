/*
Author: Abid Hasan
Created:  21-April-2024  01:22:47
*/ 
 
#include<bits/stdc++.h>
using namespace std;
#define __         ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#define ll         long long
#define endl       "\n"

 
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i) cin>>v[i];
    set<int>st;
    st.insert(v.begin(),v.end());
    int mex=0;
    while(st.count(mex)) mex++;  //time complexity of set.count() is O(log n).
    cout<<mex<<endl;
}
 
int main(){
    __
    int tc=1;
    //cin>>tc;
    while(tc--){
     solve();
    }
}
