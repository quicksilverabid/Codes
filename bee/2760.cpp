#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s3,ss1,ss2,ss3;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    ss1=s1.substr(0,10);
    ss2=s2.substr(0,10);
    ss3=s3.substr(0,10);
    cout<<s1<<s2<<s3<<endl;
    cout<<s2<<s3<<s1<<endl;
    cout<<s3<<s1<<s2<<endl;
    cout<<ss1<<ss2<<ss3<<endl;

}