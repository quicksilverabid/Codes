#include <bits/stdc++.h>
using namespace std;

#define __     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll     long long 
#define endl   "\n"



int main(){
    __
    int tc,n;
    cin>>tc;
    for(int i=1;i<=tc;i++){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"Case "<<i<<": "<<arr[(n/2)]<<endl;
    }
    
    

}


