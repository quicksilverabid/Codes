// Author: Abid Hasan
// https://atcoder.jp/contests/abc110/tasks/abc110_c
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"
 
 
void solve(){
    string s,ss;
    cin>>s>>ss;
    map<char,char>mp,mpp;
    int n=s.size();
    for(int i=0;i<n;++i){
        if(mp.find(s[i])==mp.end()){
            mp[s[i]]=ss[i];
            mpp[ss[i]]=s[i];
        }
    }

    for(int i=0;i<n;++i){
        if(mp[s[i]]!=ss[i] or mpp[ss[i]]!=s[i]){
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0) ;
    int tc=1;
    //cin>>tc;
    while(tc--){
     solve();
    }
}
