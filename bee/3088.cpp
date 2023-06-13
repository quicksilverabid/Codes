#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define endl "\n"
string ternary(int n);
int main(){
    __
    string input;
    while(getline(cin,input)){
        string output="";
        for(int i=0;i<input.length();i++){
            if(input[i]==' ' && (input[i+1]==',' || input[i+1]=='.')){
                continue;
            }
            else output+=input[i];
        }
        cout<<output<<endl;
    }

}