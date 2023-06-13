#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long 
#define endl "\n"
int main(){
    __
    int n,s=0,ans;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            s=1;
            ans=i+2;
            break;
        }

    }
if(s==0){
    cout<<0<<endl;
}
else cout<<ans<<endl;
}