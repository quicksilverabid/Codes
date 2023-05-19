#include<bits/stdc++.h>
using namespace std;
int main(){
  int a , b , c;
  cin>>a>>b>>c;
  if(((b-c) < a && b+c>a) && ((b-a) < c && a+b>c) && ((a-c)<b && a+c>b)) {
    if(a==b && b==c ){
      cout<<"Valido-Equilatero"<<endl;
    }
    else if(a == b || b ==c || a == c){
      cout<<"Valido-Isoceles"<<endl;
    }
    else{ 
          cout<<"Valido-Escaleno"<<endl;
  }
  if(((a*a)==(b*b)+(c*c))||((b*b)==(a*a)+(c*c))||((c*c)==(b*b)+(a*a))){
    cout<<"Retangulo: S"<<endl;
  }
  else{
    cout<<"Retangulo: N"<<endl;
  }
}
else {
    cout<<"Invalido"<<endl;}

    return 0;
}