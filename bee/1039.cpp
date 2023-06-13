#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define endl "\n"
int main(){
    __
    int r1,r2,x1,x2,y1,y2;
    float dist;
    while(cin>>r1>>x1>>y1>>r2>>x2>>y2){
        dist=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        if(r1>=dist+r2) cout<<"RICO"<<endl;
        else cout<<"MORTO"<<endl;
    }
}

