#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
#define ll long long;
void fastio();
int main(){
    fastio();
    int tc, a , b , ans , diff;
    cin>>tc;
    while(tc--){
    ans=diff=0;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
            continue;
        }
        else if(a>b){
            diff=a-b;
            ans++;
            if(diff&1){
                ans++;
            }
        }
        else if(a<b){
            diff=b-a;
            ans++;
            if(diff%2==0){
                ans++;
            }

        }
        cout<<ans<<endl;
    }

}

void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}