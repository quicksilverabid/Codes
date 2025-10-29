// Author: Abid Hasan
// https://atcoder.jp/contests/arc097/tasks/arc097_a?lang=en
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"
 
 
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    int k;
    cin>>k;
    set<string>v;
    for(int i=0;i<n;++i){
        string tmp="";
        for(int j=i;j<n and j-i+1<=k;++j){
            tmp+=s[j];
            v.insert(tmp);
        }
    }
    int cnt=0;
    for(auto it:v){
        cnt++;
        if(cnt==k){
            cout<<it<<endl;
        }
    }

}
 
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0) ;
    int tc=1;
    //cin>>tc;
    while(tc--){
     solve();
    }
}
