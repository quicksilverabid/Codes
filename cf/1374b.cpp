#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
#define w(x) int x;cin>>x; while(x--)
void fastio();
int main(){
    fastio();
    int n;
    w(tc){
        cin>>n;
    int count=0;
        while(n>1){ 
        if(n%6==0){
            n/=6;
            count++;
        }
        else{
            n*=2;
            count++;
        }
        }
        if(n==1){ 
            cout<<count<<endl;}
        else{ 
             cout<<-1<<endl;
        }
    }






}







void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}