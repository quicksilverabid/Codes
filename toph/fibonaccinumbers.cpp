#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int fib(int n);
int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;


}

int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1)+fib(n-2);
    
}