#include<bits/stdc++.h>
using namespace std;
void fastio();
int main(){
    fastio();
    int tc , n , check , num;
    cin>>tc;
    while(tc--){
        cin>>n>>check;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>num;
            arr[i]=abs(check-num);

        }
        int small=arr[0];
        int pos =1;
        for(int i=0;i<n;i++){
            if(small>arr[i]){
                small=arr[i];
                pos=i+1;
            }
        }
        cout<<pos<<"\n";
    }
    

}
void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}