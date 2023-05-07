#include<bits/stdc++.h>
using namespace std;
void fastio();
int main(){
    fastio();
    int n , a,b,c , sum,count=0;;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        sum=a+b+c;
        if(sum>1) count++;


    }
    cout<<count<<"\n";
    

}
void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}