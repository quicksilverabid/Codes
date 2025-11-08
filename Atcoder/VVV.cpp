// Author: Abid Hasan
// https://atcoder.jp/contests/abc111/tasks/arc103_a
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"
 
 
void solve(){
    int n;
    cin>>n;
    int v[n];
    map<int,int>mp,mpp;
    for(int i=0;i<n;++i){
        cin>>v[i];
        if(i&1) mp[v[i]]++;
        else mpp[v[i]]++;
    }

    vector<pair<int,int>>odd,ev;

    for(auto it:mp){
        odd.push_back({it.second,it.first});
    }
    for(auto it:mpp){
        ev.push_back({it.second,it.first});
    }

    sort(odd.rbegin(),odd.rend());
    sort(ev.rbegin(),ev.rend());


    if(odd.size()==1 and ev.size()==1){
        if(odd[0].second!=ev[0].second){
            cout<<0<<endl;
            return;
        }
        else{
            cout<<n-ev[0].first<<endl;
            return;
        }

    }

    if(odd.size()==1 and ev.size()>1){
        if(odd[0].second!=ev[0].second){
            cout<<n/2-ev[0].first<<endl;
            return;
        }
        else{
            cout<<n/2-ev[1].first<<endl;
            return;
        }
    }

    if(ev.size()==1 and odd.size()>1){
        if(ev[0].second!=odd[0].second){
            cout<<n/2-odd[0].first<<endl;
            return;
        }
        else{
            cout<<n/2-odd[1].first<<endl;
            return;
        }
    }

    if(odd.size()>1 and ev.size()>1){
        if(odd[0].second!=ev[0].second){
            cout<<n-(odd[0].first+ev[0].first)<<endl;
            return;
        }
        else{
            if(odd[0].first>ev[0].first){
                cout<<n-(odd[0].first+ev[1].first)<<endl;
                return;
            }
            else if(odd[0].first<ev[0].first){
                cout<<n-(odd[1].first+ev[0].first)<<endl;
                return;
            }
            else{
                if(odd[1].first<ev[1].first){
                    cout<<n-(odd[0].first+ev[1].first)<<endl;
                }
                else{
                    cout<<n-(odd[1].first+ev[0].first)<<endl;
                }
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
