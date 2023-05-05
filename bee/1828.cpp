#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , count=1;
    cin>>n;
    string str1, str2;
    while(n--){
        cin>>str1>>str2;
        cout<<"Caso #"<<count++<<": ";
        if (str1 == str2) cout << "De novo!\n";
		else if (str1 == "tesoura" && str2 == "papel") cout << "Bazinga!\n";
		else if (str2 == "tesoura" && str1 == "papel") cout << "Raj trapaceou!\n";
		else if (str1 == "papel" && str2 == "pedra") cout << "Bazinga!\n";
		else if (str2 == "papel" && str1 == "pedra") cout << "Raj trapaceou!\n";
		else if (str1 == "pedra" && str2 == "lagarto") cout << "Bazinga!\n";
		else if (str2 == "pedra" && str1 == "lagarto") cout << "Raj trapaceou!\n";
		else if (str1 == "lagarto" && str2 == "Spock") cout << "Bazinga!\n";
		else if (str2 == "lagarto" && str1 == "Spock") cout << "Raj trapaceou!\n";
		else if (str1 == "Spock" && str2 == "tesoura") cout << "Bazinga!\n";
		else if (str2 == "Spock" && str1 == "tesoura") cout << "Raj trapaceou!\n";
		else if (str1 == "tesoura" && str2 == "lagarto") cout << "Bazinga!\n";
		else if (str2 == "tesoura" && str1 == "lagarto") cout << "Raj trapaceou!\n";
		else if (str1 == "lagarto" && str2 == "papel") cout << "Bazinga!\n";
		else if (str2 == "lagarto" && str1 == "papel") cout << "Raj trapaceou!\n";
		else if (str1 == "papel" && str2 == "Spock") cout << "Bazinga!\n";
		else if (str2 == "papel" && str1 == "Spock") cout << "Raj trapaceou!\n";
		else if (str1 == "Spock" && str2 == "pedra") cout << "Bazinga!\n";
		else if (str2 == "Spock" && str1 == "pedra") cout << "Raj trapaceou!\n";
		else if (str1 == "pedra" && str2 == "tesoura") cout << "Bazinga!\n";
		else if (str2 == "pedra" && str1 == "tesoura") cout << "Raj trapaceou!\n";
    }
}