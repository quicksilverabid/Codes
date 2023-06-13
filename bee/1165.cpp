#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define endl "\n"
bool prime(int n);
int main(){
    __
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        if(prime(n)){
            cout<<n<<" eh primo"<<endl;
        }
        else cout<<n<<" nao eh primo"<<endl;

    }
    
}
bool prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}