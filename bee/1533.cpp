#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,max,max1,pos;
    while(cin>>n&&n){ 
    int arr[n];
    max=max1=pos=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(max1<arr[i]&&arr[i]!=max){
            max1=arr[i];
            pos=i;
        }
    }
    cout<<pos+1<<endl;
}
}