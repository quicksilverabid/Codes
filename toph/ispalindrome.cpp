#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main(){
    string str;
    int flag=0;
    getline(cin,str);
    int len = str.length();
    for(int i=0;i<len;i++){
        int j=len-1-i;
        if(str[i]==str[j]) flag=0;
        else {
            cout<<"No"<<endl;
            flag=1;
            break;

        }
    }
    if(flag==0) cout<<"Yes"<<endl;
}