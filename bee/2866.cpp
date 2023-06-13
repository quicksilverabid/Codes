#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define endl "\n"
int main(){
    __
    string str;
    int n;
    cin>>n;
    while(n--){
        cin>>str;
       
        for(int i=str.length()-1;i>=0;i--){
            if(str[i]>=97 && str[i]<=122){
                cout<<str[i];
            }
            
        }
            cout<<endl;

    }

    
}