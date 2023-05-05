#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        
        for(int i=0;i<n;i+=2){
            int log=(n-i)/2;
            for(int j=0;j<log;j++){
                cout<<" ";
            }
            for(int j=i;j>=0;j--){
                cout<<"*";
            }
            cout<<"\n";
        }
        for(int i=0;i<n/2;i++){
            cout<<" ";
        }
        cout<<"*\n";
        for(int i=1;i<n/2;i++){
            cout<<" ";
        }
        cout<<"***\n\n";
    }
}