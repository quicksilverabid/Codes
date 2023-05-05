#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int alen = a.length();
    int blen = b.length();
    if(a[0]<b[0]){
        cout<<a<<endl<<b<<endl;
    }
    else if (a[0]>b[0]){
        cout<<b<<endl<<a<<endl;
    }
    else if (alen<blen){
        cout<<a<<endl<<b<<endl;
    }
    else if (alen>blen){
        cout<<b<<endl<<a<<endl;
    }

}