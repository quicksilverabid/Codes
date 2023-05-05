#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int m ,n , f1=1,f2=1,ans;
    while(cin>>m>>n){
        for(int i=1;i<=m;i++){
            f1=f1*i;
        }
        for(int i=1;i<=n;i++){
            f2=f2*i;
        }
        ans=f1+f2;
        cout<<ans<<endl;
        f1=f2=1;
    }
}