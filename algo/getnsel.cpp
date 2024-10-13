/*
Author: Abid Hasan
Created:  23-May-2024  22:02:49
*/ 
 
#include<bits/stdc++.h>
using namespace std;
#define __         ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#define ll         long long
#define endl       "\n"


vector<int>get_nsel(vector<int>a){
    int n=a.size();
    vector<int>nset(n);
    stack<int>st;
    st.push(-1);
    for(int i=0;i<n;++i){
        while(st.top()!=-1 and a[st.top()]>=a[i]){
            st.pop();
        }
        nset[i]=st.top();
        st.push(i);
    }
    return nset;
}
 
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i) cin>>v[i];
        
}
 
int main(){
    __
    int tc=1;
    //cin>>tc;
    while(tc--){
     solve();
    }
}
