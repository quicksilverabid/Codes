/*
Author: Abid Hasan
Created:  05-February-2024  01:35:25
*/ 
 
#include<bits/stdc++.h>
using namespace std;
#define __         ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#define ll         long long
#define endl       "\n"
 
int main(){
    __
    int n;
    cin>>n;
    vector<int>v;
    for(int i=2;i<=n;i++){
        while(n%i==0){
            v.push_back(i);
            n/=i;
        }
    }
    if(n>1) v.push_back(n);
    for(auto it:v) cout<<it<<endl;
}
