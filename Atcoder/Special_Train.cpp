// Author: Abid Hasan
// https://atcoder.jp/contests/abc084/tasks/abc084_c
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"
 
 
void solve(){
    int n;
    cin>>n;
    int jawartime[n],trainashbe[n],waittime[n];

    for(int i=0;i<n-1;++i){
        cin>>jawartime[i]>>trainashbe[i]>>waittime[i];
    }

    for(int i=0;i<n;++i){
        ll tmp=0;
        for(int j=i;j<n-1;++j){
            if(tmp<trainashbe[j]) tmp=trainashbe[j];

            if(tmp%waittime[j]!=0){
                tmp+=waittime[j]-tmp%waittime[j];
            }
            tmp+=jawartime[j];        
        }

        cout<<tmp<<endl;
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
