// Author: Abid Hasan
// https://atcoder.jp/contests/abc113/tasks/abc113_c
#include<bits/stdc++.h>
using namespace std;
#define __         ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#define ll         long long
#define endl       "\n"
 
 
void solve(){
	int n,m;
	cin>>n>>m;
	map<int,pair<int,int>>mp;
	vector<pair<pair<int,int>,int>>tmp;
	vector<pair<int,int>>v;
	vector<int>cnt(n+1);

	for(int i=0;i<m;++i){
		int a,b;
		cin>>a>>b;
		v.push_back({a,b});
		tmp.push_back({{a,b},0});
	}

	ranges::sort(tmp);

	for(int i=0;i<m;++i){
		int t=tmp[i].first.first;
		cnt[t]++;
		tmp[i].second=cnt[tmp[i].first.first];
		mp[tmp[i].first.second]={tmp[i].first.first,tmp[i].second};
	}

	for(auto it:v){
		ll a,b;
		a=mp[it.second].first;
		b=mp[it.second].second;
		cout<<setw(6)<<setfill('0')<<a;
		cout<<setw(6)<<setfill('0')<<b<<endl;

	}

}
 
int main(){
	__
	int tc=1;
	//cin>>tc;
	while(tc--){
	 solve();
	}
}
