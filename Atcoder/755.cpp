// Author: Abid Hasan
// https://atcoder.jp/contests/abc114/tasks/abc114_c
#include<bits/stdc++.h>
using namespace std;
#define __         ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#define ll         long long
#define endl       "\n"

int n;
int cnt=0;

void lulu(ll num,bool ck,bool ckk,bool ckkk){
	if(num>n) return;
	if(ck and ckk and ckkk) cnt++;
	lulu(num*10+3,true,ckk,ckkk);
	lulu(num*10+5,ck,true,ckkk);
	lulu(num*10+7,ck,ckk,true);
}
 
void solve(){
	cin>>n;
	lulu(0,0,0,0);
	cout<<cnt<<endl;

}
 
int main(){
	__
	int tc=1;
	//cin>>tc;
	while(tc--){
	 solve();
	}
}
