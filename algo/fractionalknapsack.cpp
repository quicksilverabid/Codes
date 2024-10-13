/*
Author: Abid Hasan
Created:  25-May-2024  00:39:52
*/ 
 
#include<bits/stdc++.h>
using namespace std;
#define __         ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#define ll         long long
#define endl       "\n"

bool cmp(pair<int,int>a,pair<int,int>b){
    double x,y;
    x=(double) a.first/(double)a.second;
    y=(double) b.first/(double)b.second;
    return x>y;
}

double fraction(int w,vector<pair<int,int>>v,int n){
    sort(v.begin(),v.end(),cmp);
    double ans=0.0;
    for(int i=0;i<n;++i){
        if(v[i].second<=w){
            w-=v[i].second;
            ans+=v[i].first;
        }
        else{
            ans+=v[i].first*((double)w/(double)v[i].second);
            break;
        }
    }
    return ans;
}
 
void solve(){
    int n;
    cin>>n;
    int w;
    cin>>w;
    vector<pair<int,int>>vp(n);
    for(int i=0;i<vp.size;++i){
        cin>>vp[i].first>>vp[i].second;
    }
    cout<<fraction(w,vp,n)<<endl;

}
 
int main(){
    __
    int tc=1;
    //cin>>tc;
    while(tc--){
     solve();
    }
}
