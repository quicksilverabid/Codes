// Author: Abid Hasan
// https://atcoder.jp/contests/abc112/tasks/abc112_c
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"
 
 
void solve(){
    int n;
    cin>>n;
    vector<ll>x(n),y(n),v(n);
    for(int i=0;i<n;++i){
        cin>>x[i]>>y[i]>>v[i];
    }

    int base=-1;
    for(int i=0;i<n;++i){
        if(v[i]>0){
            base=i;
            break;
        }
    }

    for(int cx=0;cx<=100;++cx){
        for(int cy=0;cy<=100;++cy){
            ll h=v[base]+abs(x[base]-cx)+abs(y[base]-cy);
            bool ck=true;
            for(int i=0;i<n;++i){
                ll hh=max<ll>(h-abs(x[i]-cx)-abs(y[i]-cy),0);
                if(v[i]!=hh){
                    ck=false;
                    break;
                }
            }

            if(ck){
                cout<<cx<<' '<<cy<<' '<<h<<endl;
                return;
            }

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
