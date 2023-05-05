#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch[48] = {"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};
    char c;
    while(scanf("%c",&c)!=EOF){
        for(int i=0;i<48;i++){
            if(c == ch[i]){
                cout<<ch[i-1];
                break;
            }
            else if (c ==' '){
                cout<<" ";
                break;
            }
            else if (c == '\n'){
                cout<<"\n";
                break;
            }
        }
    }

    

}