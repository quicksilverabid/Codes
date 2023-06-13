#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define endl "\n"
int main(){
    __
    string str1 , str2;
    int n;
    cin>>n;
    while(n--){
        cin>>str1>>str2;
        if(str1=="papel" && str2 =="papel"){
            cout<<"Ambos venceram"<<endl;
        }
       else if(str1=="pedra" && str2 =="pedra"){
            cout<<"Sem ganhador"<<endl;
        }
       else if(str1=="ataque" && str2 =="ataque"){
            cout<<"Aniquilacao mutua"<<endl;
        }
       else if(str1=="ataque" && str2 =="pedra"){
            cout<<"Jogador 1 venceu"<<endl;
        }
       else if(str2=="ataque" && str1 =="pedra"){
            cout<<"Jogador 2 venceu"<<endl;
        }
       else if(str1=="pedra" && str2 =="papel"){
            cout<<"Jogador 1 venceu"<<endl;
        }
       else if(str2=="pedra" && str1 =="papel"){
            cout<<"Jogador 2 venceu"<<endl;
        }
       else if(str1=="ataque" && str2 =="papel"){
            cout<<"Jogador 1 venceu"<<endl;
        }
       else if(str2=="ataque" && str1 =="papel"){
            cout<<"Jogador 2 venceu"<<endl;
        }
       


    }

}