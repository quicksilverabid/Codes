// Author: Abid Hasan
#include<bits/stdc++.h>
using namespace std;       
#define ll         long long
#define endl       "\n"

const int N=1e7+7;
bitset<N>v;

void sieve(){
	v.set();
	v[0]=v[1]=0;
	for(int i=4;i<=N;i+=2) v[i]=0;

	for(int i=3;i*i<=N;i+=2){
		if(v[i]){
			for(int j=i*i;j<=N;j+=2*i){
				v[j]=0;
			}
		}
	}

	for(int i=2;i<=N;++i){
		if(v[i]) cout<<i<<' ';
	}
}
 
void solve(){
	sieve();
}
 
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0) ;
	int tc=1;
	//cin>>tc;
	while(tc--){
	 solve();
	}
}
