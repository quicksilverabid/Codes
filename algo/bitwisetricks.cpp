/*
Author: Abid Hasan
Created:  18-June-2024  03:47:28
*/ 
 
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<class T> using oset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
#define __         ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#define ll         long long
#define endl       "\n"

bool oddeven(int n){
    return n&1; //returns true if odd
                //returns false if even
}

bool powoftwo(int n){
    return n&(n-1); //returns false if powere of two
                   //returns true if not power of two
                   //doesn't work if n=0
}

bool kthbitset(int n,int k){
    return n&(1<<k); //returns true if the kth bit of a number is one
                     //returns false if the kth bit of a number is zero
                     //kth counting starts from zero
    return (n>>k)&&1;
}

void setkthbit(int n,int k){
    cout<<(n|(1<<k))<<endl;
}

void unsetkthbit(int n,int k){
    cout<<(n& (~(1<<k)))<<endl;
}

void togglekthbit(int n,int k){
    cout<<(n^(1<<k))<<endl;
}

void bitmask(int n,int v[]){ //generate all possible subset/subsequence 2^n time
    for(int mask=0;mask<(1<<n);++mask){
        for(int i=0;i<n;++i){
            if(mask&(1<<i)){
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
}

void boss(){
    int n;
    cin>>n;
    bitset<32>bt(n);
    string s=bt.to_string(); //will give a 32 bit string of binary
    bitset<32>bit(s);
    int ans=bt.to_ullong(); //will convert the binary string to decimal
    bt.count(); // will count the number of setbits
    bt.flip(); // will reverse all the bits
}
 
void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    kthbitset(n,k)?cout<<1<<endl:cout<<0<<endl;
}
 
int main(){
    __
    int tc=1;
    // cin>>tc;
    while(tc--){
     solve();
    }
}
