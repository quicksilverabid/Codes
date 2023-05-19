#include <bits/stdc++.h>
using namespace std;

#define ll     long long 
#define endl   "\n"
#define w(x)   int x; cin>>x; while(x--)
#define f(x)   for(int i=0;i<x;i++)



void fastio();
int main(){
    fastio();
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0) cout<<i<<endl;
    }
    
    

}







void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}