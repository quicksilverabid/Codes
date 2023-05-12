#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
void fastio();
int main(){
    fastio();
    int tc,n,num;
    cin>>tc;
    while(tc--){
        int o=0,e=0;
        cin>>num;
        for(int i=0;i<2*num;i++){
            cin>>n;
            if(n&1){
                 o++;
            }
            else e++;

        }
        if(o==e){
            cout<<"Yes"<<endl;
            
        }
        else cout<<"No"<<endl;

    }
    

}
void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}