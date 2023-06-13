#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define endl "\n"
int arr[10001];
int main(){
    int n,m,t,count;
    while(cin>>n>>m && n!=0 && m!=0){
        memset(arr,0,sizeof(arr));
        count=0;
        for(int i=0;i<m;i++){
            cin>>t;
            arr[t]++;
            if(arr[t]==2) count++;
        }
        cout<<count<<endl;
    }
}