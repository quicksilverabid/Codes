#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n";
#define w(x) int x;cin>>x; while(x--)
void fastio();
ll int fact(int a);
int main(){
    fastio();
    string str;
    while(cin>>str){
    if (str=="0") break;
    int length = str.length();
    ll ans = fact(length);
    cout<<ans<<endl;

    }






}
ll int fact(int a){
    if (a==1) return 1;
    return a*fact(a-1);
}







void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}