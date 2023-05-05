#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch[10],temp;
    cin>>ch;
    int length=strlen(ch),half=length/2;
    for(int i=0,j=length-1;i<half;i++,j--){
        temp=ch[i];
        ch[i]=ch[j];
        ch[j]=temp;
    }
    cout<<ch<<endl;
}