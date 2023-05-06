#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,pos=1,min;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
            pos=i+1;
            
        }
    }
    cout<<pos<<endl;
    return 0;
}