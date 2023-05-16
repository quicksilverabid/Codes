#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define w(x)   int x;cin>>x;while(x--)
#define f(x)    for(int i=0;i,x;i++)
#define ll long long
void fastio();
int main(){
    fastio();
    int n;
    while(cin>>n && n){
        int ans = n*(n+1)*(2*n+1)/6;
        cout<<ans<<endl;
    }

}
void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}