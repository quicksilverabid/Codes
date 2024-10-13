/*
Author: Abid Hasan
Created:  02-April-2024  20:34:44
*/ 
 
#include<bits/stdc++.h>
using namespace std;
#define __         ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#define ll         long long
#define int        ll
#define endl       "\n"

 
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>v;
    vector<int>diff(n+2);
    v.push_back(0); //for 1 base indexing
    for(int i=0;i<n;++i){
        int a;
        cin>>a;
        v.push_back(a);
    }
    while(q--){
        int l,r,update;
        cin>>l>>r>>update;
        diff[l]+=update;
        diff[r+1]-=update;
    }

    for(int i=1;i<=n;++i){
        diff[i]+=diff[i-1];
        v[i]+=diff[i];
    }

    for(int i=1;i<=n;++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
 
int main(){
    __
    int tc=1;
    //cin>>tc;
    while(tc--){
     solve();
    }
}
