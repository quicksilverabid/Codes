#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
    __
    int s(int n);
    int tc,num,sum=0;
    while(cin>>tc>>num){
        int sum=s(num);
        if(sum%3==0){
            cout<<sum<<" sim"<<"\n";
        }
        else{
            cout<<sum<<" nao"<<"\n";
        }
        
    }
    

}
int s(int num){
        int sum=0;
    while(num!=0){
        int n=num%10;
        sum+=n;
        num/=10;
    }
    return sum;
}