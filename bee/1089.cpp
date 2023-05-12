#include<bits/stdc++.h>
using namespace std;
void fastio();
int main(){
    fastio();
    int n;
    while(cin>>n&&n){
        int a[n];
        int p=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=1;i<n-1;i++){
            if(a[i]>a[i-1]&&a[i]>a[i+1] || a[i]<a[i-1]&&a[i]<a[i+1] ){
                p++;
            }
        }
            if(a[0]>a[1]&&a[0]>a[n-1]){
                p++;
            }
            else if(a[0]<a[1]&&a[0]<a[n-1]){
                p++;
            }
            if(a[n-1]>a[0]&&a[n-1]>a[n-2]){
                p++;
            }
            else if(a[n-1]<a[0]&&a[n-1]<a[n-2]){
                p++;
            }

        
        cout<<p<<"\n";
    }
}
void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}