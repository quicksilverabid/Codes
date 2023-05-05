#include<bits/stdc++.h>
using namespace std;
bool isprime(int n);
bool super(int n);
int main(){
    int n;
    while(cin>>n){
        if(isprime(n)){
            if(super(n)){
                cout<<"Super"<<"\n";
            }
            else{
                cout<<"Primo"<<'\n';
            }
        }
        else cout<<"Nada"<<"\n";
    }

}

bool isprime(int n){
    if(n<=1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
bool super(int n){
    while(n>0){
        int rem=n%10;
        if(!isprime(rem)){
            return false;
        }
        n/=10;
    }
    return true;
}