#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main(){
    string str1,str2;
    int s1=0,s2=0;
    getline(cin,str1);
    getline(cin,str2);
    int len1=str1.length();
    int len2=str2.length();
    if(len1==len2){
        for(int i=0,j=0;i<len1,j<len2;i++,j++){
            s1+=str1[i];
            s2+=str2[j];
        }
        if(s1==s2) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    else cout<<"No"<<endl;
}