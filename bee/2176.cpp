#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define endl "\n"
int main(){
    __
    int count=0;
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]=='1') count++;
    }
    if(count%2==0){
        cout<<str<<0<<endl;
    }
    else{
        cout<<str<<1<<endl;
    }

    
}