#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch[101];
    cin>>ch;
   int len=strlen(ch); 
   sort(ch,ch+len);
   int count=0;
    for(int i=0;i<len;i++){
        if(ch[i]!=ch[i+1]){
            count++;
        }
    }
    if(count%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}
