// Author: Abid Hasan
// https://atcoder.jp/contests/abc084/tasks/abc084_d?lang=en
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"

const int N=1e5+7;

int prime[N];
int hehe[N];
int pref[N+1];

void lulu(){
    for(int i=2;i<N;++i){
        for(int j=i;j<N;j+=i){
            prime[j]++;
        }
    }
    for(int i=3;i<=N;i+=2){
        if(prime[i]==1 and prime[(i+1)/2]==1) hehe[i]=1;
    }
    for(int i=1;i<=N;++i){
        pref[i]=pref[i-1]+hehe[i];
    }
}
 
void solve(){
    
    int l,r;
    cin>>l>>r;
    cout<<pref[r]-pref[l-1]<<endl;

}
 
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0) ;
    lulu();
    int tc=1;
    cin>>tc;
    while(tc--){
     solve();
    }
}
