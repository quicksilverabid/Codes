#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
#define w(tc)  int tc; cin>>tc; while(tc--)
void fastio();
int main(){
    fastio();
    int n,ans,rem;
    cin>>n;
    ans=n/100;
    rem = n%100;
    ans+=rem/20;
    rem=rem%20;
    ans+=rem/10;
    rem=rem%10;
    ans+=rem/5;
    rem=rem%5;
    ans+=rem/1;
    cout<<ans<<endl;
    





}







void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}