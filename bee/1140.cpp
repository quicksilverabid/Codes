#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define endl "\n"

bool toto(string line);


int main(){
    __
    string str;
    while(getline(cin,str)){
        if(str=="*") break;
        for(int i=0;i<str.length();i++){
            str[i]=tolower(str[i]);
        }
        if(toto(str)){
            cout<<"Y"<<endl;
        }
        else cout<<"N"<<endl;

    }
}
bool toto (string line){
    char c=line[0];
    for(int i=0;i<line.length();i++){
        if(line[i]==' '){
            if(line[i+1]!=c){
                return false;
            }
        }
    }
    return true;
}