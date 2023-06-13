#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define endl "\n"
bool checkpass(string pass);

int main(){
    __
    string str;
    while(getline(cin,str)){
        if(checkpass(str)){
            cout<<"Senha valida."<<endl;
        }
        else{
            cout<<"Senha invalida."<<endl;
        }

    }
}
bool checkpass(string pass){
    bool upper = false;
    bool lower = false;
    bool number = false;
    for(char c : pass){
        if(isupper(c)){
            upper=true;
        }
        else if(islower(c)){
            lower=true;
        }
        else if(isdigit(c)){
            number=true;
        }
    }
    if(!upper || !lower || !number){
        return false;
    }
    for(char c: pass){
        if(!isalnum(c)){
            return false;
        }
    }
    if(pass.length()<6 || pass.length()>32){
        return false;
    }
    return true;

}
