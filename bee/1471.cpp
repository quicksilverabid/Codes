#include<bits/stdc++.h>
using namespace std;
int main(){
	int in , out;
	while(cin>>in>>out){
		int arr[in]={};
		for(int i=0 ; i<out;i++){
			int n;
			cin>>n;
			arr[n-1]=n;
		}
		if(in==out) cout<<"*";
	
		else{
			for(int i=0;i<in;i++){
				if(arr[i]==0){
					cout<<i+1<<" ";
				}
			}

			}
		cout<<endl;

	
	
	
	}
}