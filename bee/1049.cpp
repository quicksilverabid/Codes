#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1;
    string str2;
    string str3;
        getline(cin,str1);
        getline(cin,str2);
        getline(cin,str3);
        if(str1=="vertebrado"){
            if(str2=="ave"){
                if(str3=="carnivoro"){
                    cout<<"aguia"<<endl;
                }
                else if (str3=="onivoro"){
                    cout<<"pomba"<<endl;
                }
            }
            else if(str2=="mamifero"){
                if(str3=="onivoro"){
                    cout<<"homem"<<endl;
                }
                else if(str3=="herbivoro"){
                    cout<<"vaca"<<endl;
                }
            }
        }
       else if(str1=="invertebrado"){
            if(str2=="inseto"){
                if(str3=="hematofago"){
                    cout<<"pulga"<<endl;
                }
                else if (str3=="herbivoro"){
                    cout<<"lagarta"<<endl;
                }
            }
            else if(str2=="anelideo"){
                if(str3=="hematofago"){
                    cout<<"sanguessuga"<<endl;
                }
                else if(str3=="onivoro"){
                    cout<<"minhoca"<<endl;
                }
            }
        }
}