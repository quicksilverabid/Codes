// Author: Abid Hasan
// https://atcoder.jp/contests/abc076/tasks/abc076_c
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"
 
 
void solve(){
    string s,ss;
    cin>>s>>ss;
    int n=s.size();
    int m=ss.size();

    if(m>n){
        cout<<"UNRESTORABLE"<<endl;
        return;
    }

    string ans="|";
    for(int i=0;i<=n-m;++i){
        string tmp=s;
        bool ck=true;
        for(int j=0;j<m;++j){
            if(s[i+j]!='?' and s[i+j]!=ss[j]){
                ck=false;
                break;
            }
            tmp[i+j]=ss[j];
        }
        cout<<tmp<<endl;

        if(ck){
            for(auto &it:tmp){
                if(it=='?') it='a';

            }
            ans=min(ans,tmp);
        }

    }

    ans=="|"?cout<<"UNRESTORABLE"<<endl:cout<<ans<<endl;

}
 
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0) ;
    int tc=1;
    //cin>>tc;
    while(tc--){
     solve();
    }
}
