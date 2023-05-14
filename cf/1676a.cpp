#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
#define ll long long ;
void fastio();
int main(){
    fastio();
    int n;
    cin>>n;
    while(n--){
        string str;
        int a,b,c,x,y,z;
        cin>>str;
        a=str[0];
        b=str[1];
        c=str[2];
        x=str[3];
        y=str[4];
        z=str[5];
        if((a+b+c)==(x+y+z)){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }

}


void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}